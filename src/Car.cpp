#include "Car.h"

// Определение и инициализация статического поля _registered для фабрики
bool Car::_registered = VehicleFactory::Register(2, []() {
	return std::make_unique<Car>();
});

void Car::PrintInfo() const
{
	Vehicle::PrintInfo();
	std::cout << "Мощность двигателя: " << GetEnginePower() << " л.с." << "\n";
}
