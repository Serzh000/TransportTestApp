#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <memory>
#include "VehicleFactory.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main(int argc, char* argv[])
{
#ifdef _WIN32
    // Устанавливаем UTF-8 для консоли Windows
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    if (argc < 2) {
        std::cerr << "ОШИБКА: НЕ УКАЗАНЫ ПАРАМЕТРЫ!\n";
        return 1;
    }

    std::vector<std::unique_ptr<Vehicle>> vehicles;

    for (int i = 1; i < argc; ++i) {
        std::stringstream ss(argv[i]);
        int transportType;

        ss >> transportType;

        if (ss.fail()) {
            std::cerr << "ОШИБКА: НЕВЕРНЫЙ ПАРАМЕТР '" << argv[i] << "'! ОЖИДАЕТСЯ ЧИСЛО!\n";
            return 1;
        }

        vehicles.emplace_back(VehicleFactory::CreateVehicle(transportType));
    }

    for (auto& transport : vehicles) {
        if (!transport) {
            std::cerr << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА\n\n";
            continue;
        }
        transport->PrintInfo();
        std::cout << "\n";
    }

    return 0;
}
