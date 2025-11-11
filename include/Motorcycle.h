#pragma once

#include "Vehicle.h"
#include "VehicleFactory.h"

class Motorcycle : public Vehicle
{
public:
	Motorcycle() : Vehicle("Мотоцикл", 2, 200) {}
	~Motorcycle() override = default;

	void PrintInfo() const override;

private:
	static bool _registered;
};

