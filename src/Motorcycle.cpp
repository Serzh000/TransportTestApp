#include "Motorcycle.h"

// Определение и инициализация статического поля _registered для фабрики
bool Motorcycle::_registered = VehicleFactory::Register(0, [](){
	return std::make_unique<Motorcycle>();
});

void Motorcycle::PrintInfo() const
{
	Vehicle::PrintInfo();
}
