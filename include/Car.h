#pragma once

#include "Vehicle.h"
#include "VehicleFactory.h"

class Car : public Vehicle
{
public:
	Car(int enginePower = 75) 
		: Vehicle("Автомобиль", 4, 150), 
		_enginePower(enginePower)
	{}
	~Car() override = default;

	void PrintInfo() const override;
	int GetEnginePower() const { return _enginePower; }

private:
	static bool _registered;
	int _enginePower;
};

