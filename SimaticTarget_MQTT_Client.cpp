// SimaticTarget_MQTT_Client.cpp : Defines the entry point for the application.
//

#include "SimaticTarget_MQTT_Client.h"
#include "SimTargetClientHandler.h"
using namespace std;

int main()
{
	SimTargetClientHandler clientHandler = SimTargetClientHandler("cidKaya6", "149.212.242.225", "9883", "2bdebf26-ddf5-4647-90ff-73c1491a4950", "edge", "edge", 60);
	cout << "Hello CMake." << endl;
	return 0;
}
