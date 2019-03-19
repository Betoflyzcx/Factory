#include <iostream>
#include "string.h"

enum VehicleType
{
	VT_TwoWheeler, VT_ThreeWheeler,VT_FourWheeler
};

class vehicle // abstract class
{
	public:
		virtual void printVehicle()=0;
		static vehicle* create(VehicleType); // may have to fill this in with type
	private:
};




