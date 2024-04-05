#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <time.h>
#include <stdint.h>
#include <iostream>
using namespace std;
class ParkingLot {
private:
    int maxCapacity;
    int currentCount;
    Vehicle** vehicles;
public:
    ParkingLot(int capacity) ;
    ~ParkingLot() ;
    int getCount() ;
    void parkVehicle(Vehicle* vehicle) ;
    void unparkVehicle(int vehicleID) ;
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif