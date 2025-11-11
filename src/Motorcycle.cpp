#include "Motorcycle.h"

bool Motorcycle::_registered = VehicleFactory::Register(0, [](){
	return std::make_unique<Motorcycle>();
	});

void Motorcycle::PrintInfo() const
{
	Vehicle::PrintInfo();
}
