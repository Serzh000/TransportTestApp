#include "Car.h"

bool Car::_registered = VehicleFactory::Register(2, []() {
	return std::make_unique<Car>();
	});

void Car::PrintInfo() const
{
	Vehicle::PrintInfo();
	std::cout << "Мощность двигателя: " << GetEnginePower() << " л.с." << "\n";
}
