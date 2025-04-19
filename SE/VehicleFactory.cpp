#include "VehicleFactory.h"
#include <algorithm>

Vehicle* VehicleFactory::createVehicle(const std::string& type) {
    std::string t = type;
    std::transform(t.begin(), t.end(), t.begin(), ::tolower);

    if (t == "car")   return new Car();
    if (t == "bike")  return new Bike();
    if (t == "truck") return new Truck();
    return nullptr;
}
