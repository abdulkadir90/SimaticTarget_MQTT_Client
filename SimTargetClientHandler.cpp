#include "SimTargetClientHandler.h"


SimTargetClientHandler::SimTargetClientHandler(const char*, const char*, const char*, const char*, const char*, const char*, int)
{
};
//SimTargetClientHandler clientHandler = SimTargetClientHandler("cidKaya6", "149.212.242.225", "9883", "2bdebf26-ddf5-4647-90ff-73c1491a4950", "edge", "edge", 60);

/*
ActionResult<void> SimTargetClientHandler::connect2LiveTwinBox() {

}
*/

// getter functions
const char* SimTargetClientHandler::getStatusTopic() {
	return "status";
}

const char* SimTargetClientHandler::getParamReadTopic() {
	return "read";
}

const char* SimTargetClientHandler::getParamsWriteTopic() {
	return "write";
}

/*ActionResult<LiveTwinStatus> SimTargetClientHandler::checkLiveTwinStatus() {

}

ActionResult<const char*> SimTargetClientHandler::readFromLiveTwinExtMode() {

}
*/

void SimTargetClientHandler::parseLiveTwinMSGContent(const char*) {

}

const char* SimTargetClientHandler::SimModl2LiveTwinMSGContent() {
	return "content";
}

/*ActionResult<bool> SimTargetClientHandler::send2LiveTwinExtMode(const char*) {

}
*/


//SimTargetClientHandler::SimTargetClientHandler(const char* clientID, const char* IP, const char* portNumber, const char* instanceID, const char* userName, const char* passwd, int keepAlive) {

//}


