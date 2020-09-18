#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cinttypes>

class Vehicle
{
private:
    uint16_t NumberOfSits{1};
    std::string Color{"White"};

public:
    void SetNumberOfSits(uint16_t numberOfSits);
    uint16_t GetNumberOfSits();

    void SetColor(std::string color);
    std::string GetColor();

    Vehicle();
    Vehicle(uint16_t numberOfSits, std::string color);
    Vehicle(const Vehicle& otherVehicle);
};



#endif // VEHICLE_H
