// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <csignal>
#include <cstring>
//#include "UnrealString.h"
//#include "StringConv.h"
#include "rdkafkacpp.h"
#include "Modules/ModuleManager.h"




enum class KafkaEventEnumType : int
{
	NOERROR = 0,
	TIMEDOUT = -185,
	PARTITIONEOF = -191,
	UNKNOWNTOPIC = -188,
	UNKNOWNPARTITION = -190
};

class KafkaErrorMap
{
public:
	KafkaErrorMap();
	FString GetError(int);
	void InitMap();
	
private:
	TMap<int, FString> ErrorCodeMap;
};

class FKafkaModule : public IModuleInterface
{

	/*
	Class Consumer_Callback for consume callback when a message is delivered.
	*/
	class Consumer_Callback : public RdKafka::ConsumeCb {
	public:
		void consume_cb(RdKafka::Message &msg, void *opaque)
		{
			if (KafkaPtr)
			{
				KafkaPtr->msg_consume(&msg, opaque);
			}
		}
		void SetKafkaPtr(FKafkaModule* kafkaPtr)
		{
			KafkaPtr = kafkaPtr;
		}
	private:
		FKafkaModule * KafkaPtr;
	};
	/* End of class Consumer_Callback */

public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool ProducerStart(TMap<FString, FString>& ConfigurationSettings, FString& Err);
	virtual bool CreateProducer(FString& Err);
	virtual bool CreateProducerTopic(TMap<FString, FString>& ConfigurationSettings, FName ftopic, FString& Err);
	virtual bool Produce(TArray<FString>& StrArr, FString& Err, bool commit);
	virtual bool Produce(FString& Str, FString& Err, bool commit);
	virtual void ProducerEnd();

	virtual bool SetTopicSetting(TPair<FString, FString>&, RdKafka::Conf* config, FString& Err);
	virtual bool SetConfigSetting(TPair<FString, FString>&, RdKafka::Conf* config, FString& Err);
	virtual bool ConsumerStart(TMap<FString, FString>& ConfigurationSettings, FString& Err);
	virtual bool CreateConsumer(FString& Err);
	void msg_consume(RdKafka::Message* message, void* opaque);
	virtual bool Consume(FString& err, TArray<FString>& StrArr, int timeout = 500, int retries = 50);
	virtual bool Consume(FString& err, FString& Str, int timeout = 500);
	virtual void SetConsumerTopic(FName topic, int partition, TMap<FString, FString>& ConfigurationSettings);
	virtual void ConsumerEnd();
	RdKafka::Producer* GetProducer();
	RdKafka::KafkaConsumer* GetConsumer();
	RdKafka::Topic* GetTopic();
	bool ConsumerTopicIsSet();
	virtual bool commit(FString& err);

	void sigterm(int sig);
	int GetLastErrorCode() { return lastErrorCode; }
	FString GetLastErrorDescription() { return ErrorMap.GetError(lastErrorCode); }
	KafkaErrorMap ErrorMap;
	//KafkaEventEnumType GetLastEventEnum() { return KafkaEventEnum; }
	//static KafkaEventEnumType KafkaEventEnum;

private:

	std::string brokers;
	std::string topic_str;
	RdKafka::Conf *tconf;
	RdKafka::Conf *conf;
	int32_t partition;
	int64_t start_offset;
	RdKafka::Producer *producer;
	RdKafka::KafkaConsumer *kafc;
	RdKafka::Topic *topic;
	FString PrivateStr;
	bool run;
	bool topic_partition_isset;
	int lastErrorCode;
	
	static void static_sigterm(int sig);
	//static FKafkaModule* FKafkaModule::instance;
	Consumer_Callback* consumer_Callback;

};

class SimpleProducerDeliveryReportCb : public RdKafka::DeliveryReportCb
{
public:
	SimpleProducerDeliveryReportCb();
	virtual ~SimpleProducerDeliveryReportCb();
	void dr_cb(RdKafka::Message &message);
};


