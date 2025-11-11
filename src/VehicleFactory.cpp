#include "VehicleFactory.h"

std::unordered_map<int, VehicleFactory::Creator>& VehicleFactory::Registry()
{
    static std::unordered_map<int, Creator> registry;
    return registry;
}

bool VehicleFactory::Register(int type, Creator creator)
{
    return Registry().emplace(type, std::move(creator)).second;
}

std::unique_ptr<Vehicle> VehicleFactory::CreateVehicle(int type)
{
    auto& reg = Registry();
    auto it = reg.find(type);
    if (it != reg.end()) {
        return it->second();
    }
    return nullptr;
}