#pragma once
#include <memory>
#include <unordered_map>
#include <functional>
#include "Vehicle.h"

class VehicleFactory
{
public:
    using Creator = std::function<std::unique_ptr<Vehicle>()>;

    // Создать транспорт по типу
    static std::unique_ptr<Vehicle> CreateVehicle(int type);

    // Зарегистрировать транспорт
    static bool Register(int type, Creator creator);

private:
    static std::unordered_map<int, Creator>& Registry();
};