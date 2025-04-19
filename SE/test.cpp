#include "pch.h"
#include "VehicleFactory.h"
#include <gtest/gtest.h>

TEST(VehicleFactoryTest, CreatesCar) {
    auto vehicle = VehicleFactory::createVehicle("car");
    ASSERT_NE(vehicle, nullptr);
    EXPECT_EQ(vehicle->drive(), "Car is driving");
}

TEST(VehicleFactoryTest, CreatesBike) {
    auto vehicle = VehicleFactory::createVehicle("bike");
    ASSERT_NE(vehicle, nullptr);
    EXPECT_EQ(vehicle->drive(), "Bike is driving");
}

TEST(VehicleFactoryTest, CreatesTruck) {
    auto vehicle = VehicleFactory::createVehicle("truck");
    ASSERT_NE(vehicle, nullptr);
    EXPECT_EQ(vehicle->drive(), "Truck is driving");
}

TEST(VehicleFactoryTest, ReturnsNullForUnknownType) {
    auto vehicle = VehicleFactory::createVehicle("plane");
    EXPECT_EQ(vehicle, nullptr);
}
