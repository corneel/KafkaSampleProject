// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

#include "Kafka.h"

#define LOCTEXT_NAMESPACE "FKafkaModule"

void FKafkaModule::StartupModule() 
{
	
}

void FKafkaModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	ConsumerEnd();
}

RdKafka::Producer* FKafkaModule::GetProducer()
{
	return producer;
}

RdKafka::KafkaConsumer* FKafkaModule::GetConsumer()
{
	return kafc;
}

RdKafka::Topic* FKafkaModule::GetTopic()
{
	return topic;
}

bool FKafkaModule::ConsumerTopicIsSet()
{
	return topic_partition_isset;
}

//bool FKafkaModule::ProducerStart(TMap<FString, FString>& ConfigurationSettings, KafkaDriverErrorStructure& ErrorStructure)
//{
//
//	conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
//
//	for (auto& Elem : ConfigurationSettings)
//	{
//		if (!SetConfigSetting(Elem, conf, Err))
//		{
//			return false;
//		}
//	}
//	return true;
//}

bool FKafkaModule::ProducerStart(TMap<FString, FString>& ConfigurationSettings, FString& Err)
{

	conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);

	for (auto& Elem : ConfigurationSettings)
	{
		if (!SetConfigSetting(Elem, conf, Err))
		{ 
			return false; 
		}
	}
	return true;
}

bool FKafkaModule::CreateProducer(FString& Err)
{
	std::string errorStr = "";
	producer = RdKafka::Producer::create(conf, errorStr);
	if (!producer) {
		Err = "CreateProducer failed: " + FString(errorStr.c_str());
		return false;
	}
	return true;
}

bool FKafkaModule::CreateProducerTopic(TMap<FString, FString>& ConfigurationSettings, FName ftopic, FString& Err)
{
	std::string errorStr = "";
	topic_str = TCHAR_TO_UTF8(*ftopic.ToString());
	tconf = RdKafka::Conf::create(RdKafka::Conf::CONF_TOPIC);
	for (auto& Elem : ConfigurationSettings)
	{
		if (!SetTopicSetting(Elem, tconf, Err))
		{
			return false;
		}
	}

	topic = RdKafka::Topic::create(producer, topic_str, tconf, errorStr);
	if (!topic) {
		Err = "CreateTopic failed: " + FString(errorStr.c_str());
		return false;
	}
	return true;
}

bool FKafkaModule::commit(FString& Err)
{
	if (producer)
	{
		int retry = 0;
		int len = producer->outq_len();
		while (len > 0 && retry < 20)
		{
			lastErrorCode = producer->poll(100);
			retry++;
			len = producer->outq_len();
		}
		if (retry > 19)
		{			
			if (lastErrorCode != RdKafka::ERR_NO_ERROR)
			{
				Err = ErrorMap.GetError(lastErrorCode);				
			}
			else
			{
				Err = "Timeout on commit";				// Timeouts
			}
			return false;
		}
	}
	return true;
}

bool FKafkaModule::Produce(FString& Str, FString& Err, bool commitFlag)
{
	Err = "";
	std::string line = std::string(TCHAR_TO_UTF8(*Str));

	RdKafka::ErrorCode resp = producer->produce(topic,
												0,
												RdKafka::Producer::RK_MSG_COPY,
												const_cast<char *>(line.c_str()),
												line.size(),
												NULL,
												NULL);

	if (resp != RdKafka::ERR_NO_ERROR)
	{
		Err = ErrorMap.GetError(resp);
		return false;
	}
	if (commitFlag)
	{
		if (!commit(Err))
		{
			return false;
		}
	}
	return true;
}

bool FKafkaModule::Produce(TArray<FString>& StrArr, FString& Err, bool commitFlag)
{
	class RdKafka::Metadata *metadata;
	lastErrorCode = producer->metadata(topic != NULL, topic, &metadata, 100);
	if (lastErrorCode != RdKafka::ERR_NO_ERROR)
	{
		Err = ErrorMap.GetError(lastErrorCode);
		return false;
	}
	delete metadata;
	
	Err = "";

	for (auto& msg : StrArr)
	{
		std::string line = std::string(TCHAR_TO_UTF8(*msg));

			//RdKafka::ErrorCode resp = producer->produce(topic,
			lastErrorCode = producer->produce(topic,
													0,
													RdKafka::Producer::RK_MSG_COPY,
													const_cast<char *>(line.c_str()),
													line.size(),
													NULL,
													NULL);

		if (lastErrorCode != RdKafka::ERR_NO_ERROR)
		{
			//Err = "Produce failed: " + FString(RdKafka::err2str(resp).c_str());
			Err = ErrorMap.GetError(lastErrorCode);
			return false;
		}

	}
	if (commitFlag)
	{
		if (!commit(Err))
		{
			return false;
		}
	}
	return true;
}

void FKafkaModule::ProducerEnd()
{
	FString Err;
	commit(Err);

	//if (topic)
	//	delete topic;
	//if (producer)
	//	delete producer;
}

bool FKafkaModule::SetTopicSetting(TPair<FString, FString>& tpair, RdKafka::Conf* config, FString& Err)
{
	std::string key = std::string(TCHAR_TO_UTF8(*tpair.Key));
	std::string value = std::string(TCHAR_TO_UTF8(*tpair.Value));
	std::string errorStr = "";;
	std::string t = key.substr(0, 6);
	if (t == "topic.")
	{
		RdKafka::Conf::ConfResult ConfResult = config->set(key, value, errorStr);
		switch (ConfResult)
		{
		case RdKafka::Conf::CONF_OK:
			lastErrorCode = 0;
			break;
		default:
			lastErrorCode = RdKafka::ErrorCode::ERR_INVALID_CONFIG;
			Err = FString(errorStr.c_str());
			return false;
			break;
		}
	}
	return true;
}

bool FKafkaModule::SetConfigSetting(TPair<FString, FString>& tpair, RdKafka::Conf* config, FString& Err)
{
	std::string key = std::string(TCHAR_TO_UTF8(*tpair.Key));
	std::string value = std::string(TCHAR_TO_UTF8(*tpair.Value));
	std::string errorStr = "";;
	std::string t = key.substr(0, 6);
	if (t != "topic.")
	{
		RdKafka::Conf::ConfResult ConfResult = config->set(key, value, errorStr);
		switch (ConfResult)
		{
			case RdKafka::Conf::CONF_OK:
				lastErrorCode = 0;
				break;
			default:
				lastErrorCode = RdKafka::ErrorCode::ERR_INVALID_CONFIG;
				Err = FString(errorStr.c_str());
				return false;
				break;
		}
	}
	return true;
}

bool FKafkaModule::ConsumerStart(TMap<FString, FString>& ConfigurationSettings, FString& Err)
{
	//FKafkaModule::instance = this;
	//signal(SIGINT, FKafkaModule::static_sigterm);
	//signal(SIGTERM, FKafkaModule::static_sigterm);
	topic_partition_isset = false;

	tconf = RdKafka::Conf::create(RdKafka::Conf::CONF_TOPIC);
	conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
	partition = RdKafka::Topic::PARTITION_UA;
	start_offset = RdKafka::Topic::OFFSET_BEGINNING;
	Err = "";
	std::string errorStr = "";

	for (auto& Elem : ConfigurationSettings)
	{
		
		if (!SetTopicSetting(Elem, tconf, Err))
		{
			return false;
		}

		if (!SetConfigSetting(Elem, conf, Err))
		{
			return false;
		}
	}

	conf->set("default_topic_conf", tconf, errorStr);
	if (errorStr.length() > 0)
	{
		Err = FString(errorStr.c_str());
		return false;
	}

	consumer_Callback = new Consumer_Callback();
	consumer_Callback->SetKafkaPtr(this);
	conf->set("consume_cb", consumer_Callback, errorStr);
	if (errorStr.length() > 0)
	{
		Err = FString(errorStr.c_str());
		return false;
	}

	return true;
}

bool FKafkaModule::CreateConsumer(FString& Err)
{

	std::string errorStr = "";
	kafc = RdKafka::KafkaConsumer::create(conf, errorStr);
	if (errorStr.length() > 0)
	{
		Err = FString(errorStr.c_str());
		return false;
	}

	return true;
}

void FKafkaModule::SetConsumerTopic(FName ftopic, int par, TMap<FString, FString>& ConfigurationSettings)
{
	topic_str = TCHAR_TO_UTF8(*ftopic.ToString());
	std::vector<RdKafka::TopicPartition*> partitions;
	FString offset = ConfigurationSettings["topic.auto.offset.reset"];
	if (offset == "earliest")
	{
		partitions.push_back(RdKafka::TopicPartition::create(topic_str, 0, 0));
	}
	else
	{
		partitions.push_back(RdKafka::TopicPartition::create(topic_str, 0));
	}
	kafc->assign(partitions);
	topic_partition_isset = true;
	return;
}

void FKafkaModule::msg_consume(RdKafka::Message* message, void* opaque) 
{
	lastErrorCode = message->err();

	switch (lastErrorCode)
	{
		case KafkaEventEnumType::TIMEDOUT:
			break;

		case KafkaEventEnumType::NOERROR:
			PrivateStr = FString(static_cast<const char *>(message->payload()), message->len());
			/* Real message */
			break;

		default:
			run = false;
			break;
	}
}

//FKafkaModule* FKafkaModule::instance = nullptr;

void FKafkaModule::sigterm(int sig)
{
	run = false;
}

void FKafkaModule::static_sigterm(int sig)
{
	/*if (instance)
	{
		instance->sigterm(sig);
	}*/
}

bool FKafkaModule::Consume(FString& Err, FString& Str)
{
	Str = Err = "";
	RdKafka::Message *message = kafc->consume(200);
	msg_consume(message, NULL);
	Err = ErrorMap.GetError(lastErrorCode);

	if (lastErrorCode == 0)
	{
		Str = PrivateStr;
		return true;
	}
	return false;
}

bool FKafkaModule::Consume(FString& Err, TArray<FString>& StrArr)
{
	class RdKafka::Metadata *metadata;
	lastErrorCode = kafc->metadata(topic != NULL, topic, &metadata, 100);
	if (lastErrorCode != RdKafka::ERR_NO_ERROR)
	{
		Err = ErrorMap.GetError(lastErrorCode);
		return false;
	}
	delete metadata;

	run = true;
	FString str = Err = "";
	StrArr.Empty();

	int retry = 0;
	while (run && retry < 20)
	{
		if (Consume(Err, str))
		{
			StrArr.Add(str);
		}
		else
		{
			retry++;
		}
	}

	if (retry > 19)
	{
		return false;
	}

	return true;
}

void FKafkaModule::ConsumerEnd()
{
	//kafc->close();
	//if (kafc)
	//	delete kafc;
	//if (topic)
	//	delete topic;
}

/* End of FKafkaModule */

KafkaErrorMap::KafkaErrorMap()
{
	InitMap();
}

FString KafkaErrorMap::GetError(int Key)
{
	FString Value = "";
	FString* ptr = ErrorCodeMap.Find(Key);
	if (ptr)
	{
		Value = *ptr;
	}
	return Value;
}

void KafkaErrorMap::InitMap()
{
	ErrorCodeMap.Reset();

	ErrorCodeMap.Add(-199, "Received message is incorrect");
	ErrorCodeMap.Add(-198, "Bad/unknown compression");
	ErrorCodeMap.Add(-197, "Broker is going away");
	ErrorCodeMap.Add(-196, "Generic failure");
	ErrorCodeMap.Add(-195, "Broker transport failure - this could mean Kafka is down");
	ErrorCodeMap.Add(-194, "Critical system resource");
	ErrorCodeMap.Add(-193, "Failed to resolve broker");
	ErrorCodeMap.Add(-192, "Produced message timed out");
	ErrorCodeMap.Add(-191, "Reached the end of the topic+partition queue on the broker. Not really an error.");
	ErrorCodeMap.Add(-190, "Permanent: Partition does not exist in cluster.");
	ErrorCodeMap.Add(-189, "File or filesystem error");
	ErrorCodeMap.Add(-188, "Permanent: Topic does not exist in cluster.");
	ErrorCodeMap.Add(-187, "All broker connections are down.");
	ErrorCodeMap.Add(-186, "Invalid argument, or invalid configuration");
	ErrorCodeMap.Add(-185, "Operation timed out");
	ErrorCodeMap.Add(-184, "Queue is full");
	ErrorCodeMap.Add(-183, "ISR count < required.acks");
	ErrorCodeMap.Add(-182, "Broker node update");
	ErrorCodeMap.Add(-181, "SSL error");
	ErrorCodeMap.Add(-180, "Waiting for coordinator to become available.");
	ErrorCodeMap.Add(-179, "Unknown client group");
	ErrorCodeMap.Add(-178, "Operation in progress");
	ErrorCodeMap.Add(-177, "Previous operation in progress, wait for it to finish.");
	ErrorCodeMap.Add(-176, "This operation would interfere with an existing subscription");
	ErrorCodeMap.Add(-175, "Assigned partitions (rebalance_cb)");
	ErrorCodeMap.Add(-174, "Revoked partitions (rebalance_cb)");
	ErrorCodeMap.Add(-173, "Conflicting use");
	ErrorCodeMap.Add(-172, "Wrong state");
	ErrorCodeMap.Add(-171, "Unknown protocol");
	ErrorCodeMap.Add(-170, "Not implemented");
	ErrorCodeMap.Add(-169, "Authentication failure");
	ErrorCodeMap.Add(-168, "No stored offset");
	ErrorCodeMap.Add(-167, "Outdated");
	ErrorCodeMap.Add(-166, "Timed out in queue");
	ErrorCodeMap.Add(-165, "Feature not supported by broker");
	ErrorCodeMap.Add(-164, "Awaiting cache update");
	ErrorCodeMap.Add(-163, "Operation interrupted");
	ErrorCodeMap.Add(-162, "Key serialization error");
	ErrorCodeMap.Add(-161, "Value serialization error");
	ErrorCodeMap.Add(-160, "Key deserialization error");
	ErrorCodeMap.Add(-159, "Value deserialization error");
	ErrorCodeMap.Add(-158, "Partial response");
	ErrorCodeMap.Add(-157, "Modification attempted on read-only object");
	ErrorCodeMap.Add(-156, "No such entry / item not found");
	ErrorCodeMap.Add(-155, "Read underflow");
	ErrorCodeMap.Add(-100, "End internal error codes");
	ErrorCodeMap.Add(-1, "Unknown broker error");
	ErrorCodeMap.Add(0, "Success");
	ErrorCodeMap.Add(1, "Offset out of range");
	ErrorCodeMap.Add(2, "Invalid message");
	ErrorCodeMap.Add(3, "Unknown topic or partition");
	ErrorCodeMap.Add(4, "Invalid message size");
	ErrorCodeMap.Add(5, "Leader not available");
	ErrorCodeMap.Add(6, "Not leader for partition");
	ErrorCodeMap.Add(7, "Request timed out");
	ErrorCodeMap.Add(8, "Broker not available");
	ErrorCodeMap.Add(9, "Replica not available");
	ErrorCodeMap.Add(10, "Message size too large");
	ErrorCodeMap.Add(11, "StaleControllerEpochCode");
	ErrorCodeMap.Add(12, "Offset metadata string too large");
	ErrorCodeMap.Add(13, "Broker disconnected before response received");
	ErrorCodeMap.Add(14, "Group coordinator load in progress");
	ErrorCodeMap.Add(15, "Group coordinator not available");
	ErrorCodeMap.Add(16, "Not coordinator for group");
	ErrorCodeMap.Add(17, "Invalid topic");
	ErrorCodeMap.Add(18, "Message batch larger than configured server segment size");
	ErrorCodeMap.Add(19, "Not enough in-sync replicas");
	ErrorCodeMap.Add(20, "Message(s) written to insufficient number of in-sync replicas");
	ErrorCodeMap.Add(21, "Invalid required acks value");
	ErrorCodeMap.Add(22, "Specified group generation id is not valid");
	ErrorCodeMap.Add(23, "Inconsistent group protocol");
	ErrorCodeMap.Add(24, "Invalid group.id");
	ErrorCodeMap.Add(25, "Unknown member");
	ErrorCodeMap.Add(26, "Invalid session timeout");
	ErrorCodeMap.Add(27, "Group rebalance in progress");
	ErrorCodeMap.Add(28, "Commit offset data size is not valid");
	ErrorCodeMap.Add(29, "Topic authorization failed");
	ErrorCodeMap.Add(30, "Group authorization failed");
	ErrorCodeMap.Add(31, "Cluster authorization failed");
	ErrorCodeMap.Add(32, "Invalid timestamp");
	ErrorCodeMap.Add(33, "Unsupported SASL mechanism");
	ErrorCodeMap.Add(34, "Illegal SASL state");
	ErrorCodeMap.Add(35, "Unuspported version");
	ErrorCodeMap.Add(36, "Topic already exists");
	ErrorCodeMap.Add(37, "Invalid number of partitions");
	ErrorCodeMap.Add(38, "Invalid replication factor");
	ErrorCodeMap.Add(39, "Invalid replica assignment");
	ErrorCodeMap.Add(40, "Invalid config");
	ErrorCodeMap.Add(41, "Not controller for cluster");
	ErrorCodeMap.Add(42, "Invalid request");
	ErrorCodeMap.Add(43, "Message format on broker does not support request");
	ErrorCodeMap.Add(44, "Isolation policy volation");
	ErrorCodeMap.Add(45, "Broker received an out of order sequence number");
	ErrorCodeMap.Add(46, "Broker received a duplicate sequence number");
	ErrorCodeMap.Add(47, "Producer attempted an operation with an old epoch");
	ErrorCodeMap.Add(48, "Producer attempted a transactional operation in an invalid state");
	ErrorCodeMap.Add(49, "Producer attempted to use a producer id which is not currently assigned to its transactional id");
	ErrorCodeMap.Add(50, "Transaction timeout is larger than the maximum value allowed by the broker's max.transaction.timeout.ms");
	ErrorCodeMap.Add(51, "Producer attempted to update a transaction while another concurrent operation on the same transaction was ongoing");
	ErrorCodeMap.Add(52, "Indicates that the transaction coordinator sending a WriteTxnMarker is no longer the current coordinator for a given producer");
	ErrorCodeMap.Add(53, "Transactional Id authorization failed");
	ErrorCodeMap.Add(54, "Security features are disabled");
	ErrorCodeMap.Add(55, "Operation not attempted");
	ErrorCodeMap.Add(1000, "Plugin Error - See Plugin Error Code/Enum for more detail");

}

SimpleProducerDeliveryReportCb::SimpleProducerDeliveryReportCb()
{
}

SimpleProducerDeliveryReportCb::~SimpleProducerDeliveryReportCb()
{
}

void SimpleProducerDeliveryReportCb::dr_cb(RdKafka::Message &message) {
	//UE_LOG(LogTemp, Warning, TEXT("Message delivery for (" + message.len() + " bytes): " + message.errstr()));
	std::cout << "Message delivery for (" << message.len() << " bytes): " <<
	message.errstr() << std::endl;
	if (message.key())
		std::cout << "Key: " << *(message.key()) << ";" << std::endl;
		//UE_LOG(LogTemp, Warning, TEXT("Key: " + *(message.key()) + ";"));
	}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FKafkaModule, Kafka)