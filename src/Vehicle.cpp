#include "Vehicle.h"

void Vehicle::PrintInfo() const
{
	std::cout << "Наименование транспорта: " << GetName() << "\n"
		<< "Кол-во колёс: " << GetWheelsCount() << "\n"
		<< "Максимальная скорость: " << GetMaxSpeed() << " км/ч" << "\n";
}
