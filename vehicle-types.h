#include "vehicle.h"

class TwoWheeler: public vehicle
{
	public:
		void printVehicle()
		{
			std::cout << "I am a two wheeler" << std::endl;
		}
	private:
	
};

class ThreeWheeler: public vehicle
{
	public:
                void printVehicle()
                {
                        std::cout << "I am a three wheeler" << std::endl;
                }
        private:
};

class FourWheeler: public vehicle
{
	public:
                void printVehicle()
                {
                        std::cout << "I am a four wheeler" << std::endl;
                }
        private:
};

vehicle* vehicle::create(VehicleType type) // pointer function which return address to
{					   //created function type ('TwoWheeler,Three')
        if(type ==VT_TwoWheeler)
        return new TwoWheeler;
        if(type == VT_ThreeWheeler)
        return new ThreeWheeler;
        if(type == VT_FourWheeler)
        return new FourWheeler;
        else return NULL;
}
