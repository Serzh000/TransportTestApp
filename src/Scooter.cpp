#include "Scooter.h"

bool Scooter::_registered = VehicleFactory::Register(1, []() {
	return std::make_unique<Scooter>();
	});

void Scooter::PrintInfo() const
{
	Vehicle::PrintInfo();
	std::cout << "Компания-владелец: " << GetOwner() << "\n";
}
