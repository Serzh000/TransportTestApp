#pragma once
#include "Vehicle.h"
#include "VehicleFactory.h"

class Bus : public Vehicle
{
public:
	Bus(int pasangersCount = 20) 
		: Vehicle("Автобус", 6, 100),
		_pasangersCount(pasangersCount)
	{}
	~Bus() override = default;

	void PrintInfo() const override;
	int GetPasangersCount() const { return _pasangersCount; }

private:
	static bool _registered;
	int _pasangersCount;
};

