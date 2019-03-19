#include "vehicle-types.h"
#include <vector>
class Client // does not inherit from anything so 
{	     //will not have access to other memebers from 
	     //vehicle class
	public:
	// Constructor
	Client(VehicleType type)
	{
		pVehicle = vehicle::create(type);
		
	}
	~Client(){
		if(pVehicle){
			delete pVehicle; // destroys pVehicle instance
			pVehicle = NULL;
		}
	}
	vehicle* getVehicle()
	{ 	// pointer so, 'p vehicle is accessed through poiner'
		return pVehicle;
	}

	private:
	vehicle *pVehicle;
};
