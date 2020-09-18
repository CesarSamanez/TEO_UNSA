#include <iostream>
#include "Vehicle.h"

void print(Vehicle car)
{
    std::cout<<car.GetNumberOfSits()<<std::endl;
    std::cout<<car.GetColor()<<std::endl;
}


int main()
{
    Vehicle car{2, "Blue"}; //an object
    print(car);

    return 0;
}
