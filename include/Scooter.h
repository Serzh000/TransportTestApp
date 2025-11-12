#pragma once
#include "Vehicle.h"
#include "VehicleFactory.h"

class Scooter : public Vehicle
{
public:
	Scooter(const std::string& owner = "Яндекс")
		: Vehicle("Cамокат", 2, 40), 
		_owner(owner) 
	{}
	~Scooter() override = default;

	void PrintInfo() const override;
	std::string GetOwner() const { return _owner; }

private:
	static bool _registered;
	std::string _owner;
};

