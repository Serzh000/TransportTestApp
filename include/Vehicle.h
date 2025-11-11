#pragma once

#include <string>
#include <iostream>

class Vehicle
{
public:

	Vehicle(const std::string& name, int wheelsCount, int maxSpeed)
		:_name(name), 
		_wheelsCount(wheelsCount), 
		_maxSpeed(maxSpeed) 
	{}
	virtual ~Vehicle() = default;

	std::string GetName() const { return _name; }
	int GetWheelsCount() const { return _wheelsCount; }
	int GetMaxSpeed() const { return _maxSpeed; }

	virtual void PrintInfo() const;

private:
	std::string _name;
	int _wheelsCount;
	int _maxSpeed;
};

