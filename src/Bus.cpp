#include "Bus.h"

// Определение и инициализация статического поля _registered для фабрики
bool Bus::_registered = VehicleFactory::Register(3, []() {
	return std::make_unique<Bus>();
});

void Bus::PrintInfo() const
{
	Vehicle::PrintInfo();
	std::cout << "Максимальное количество пассажиров: " << GetPasangersCount() << "\n";
}
