#include "Vehicle.h"

Vehicle::Vehicle()
{
    std::cout<<"Vehicle Created Default"<<std::endl;
}

Vehicle::Vehicle(uint16_t numberOfSits, std::string color) :
    NumberOfSits{numberOfSits},
    Color{color}
{
    std::cout<<"Vehicle Created Explicit"<<std::endl;
}

Vehicle::Vehicle(const Vehicle& otherVehicle):
    NumberOfSits{otherVehicle.NumberOfSits},
    Color{otherVehicle.Color}
{
    std::cout<<"Vehicle Created Copy"<<std::endl;
}

void Vehicle::SetNumberOfSits(uint16_t numberOfSits)
{
    if(numberOfSits > 10)
    {
        std::cerr<<"Number of sits must be lower than 10"<<std::endl;
        return;
    }
    this->NumberOfSits = numberOfSits;
}

uint16_t Vehicle::GetNumberOfSits()
{
    return NumberOfSits;
}

void Vehicle::SetColor(std::string color){
    this->Color = color;
}

std::string Vehicle::GetColor(){
    return Color;
}
