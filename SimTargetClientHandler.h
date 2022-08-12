#pragma once

#include <iostream>
#include <iomanip>
#include <map>
//#include <mqtt_client_cpp.hpp>
//#include "ActionResult.h"

//************************************************************
#define _TOPICWRITE "read"
#define _TOPICREAD "write"
#define _TOPICSTATUS "status"
#define _DOMAINPATH "livetwin/externalMode/"

enum LiveTwinStatus {
    INITIALIZED,
    RUNNING,
    STOPPED
};


class SimTargetClientHandler
{
private:
    char* clientID;
    char* IP;
    char* portNumber;
    char* instanceID;
    char* userName;
    char* passwd;
    int keepAlive;

    std::map < const char*, int > parameters, input, output;


public:
    SimTargetClientHandler(const char*, const char*, const char*, const char*, const char*, const char*, int);
    //SimTargetClientHandler() : SimTargetClientHandler("cidKaya6", "149.212.242.225", "9883", "2bdebf26-ddf5-4647-90ff-73c1491a4950", "edge", "edge", 60) {}

    //ActionResult<void> connect2LiveTwinBox();

    // getter functions
    const char* getStatusTopic();
    const char* getParamReadTopic();
    const char* getParamsWriteTopic();

    //ActionResult<LiveTwinStatus> checkLiveTwinStatus();

    //ActionResult<const char*> readFromLiveTwinExtMode();

    void parseLiveTwinMSGContent(const char*);

    const char* SimModl2LiveTwinMSGContent();

    //ActionResult<bool> send2LiveTwinExtMode(const char*); // 2 outputs needed -> operation status
};

//SimTargetClientHandler::SimTargetClientHandler(const char* clientID, const char* IP, const char* portNumber, const char* instanceID, const char* userName, const char* passwd, int keepAlive) {

//}


