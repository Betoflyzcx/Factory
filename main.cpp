#include "client.h"

int main()
{
	// Pointer which stores client object in it
	Client *pClient = new Client(VT_TwoWheeler);
	//using client to print the vehicle	
	
	//using istance of vehicle to print Client
	vehicle *pVehicle = pClient->getVehicle();
	pVehicle->printVehicle();
	
	return 0;
}
