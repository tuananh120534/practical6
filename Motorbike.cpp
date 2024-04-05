#include <time.h>
#include <stdint.h>
#include "Motorbike.h"
#include "Vehicle.h"
using namespace std;
Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration(){
    int parkingDuration = Vehicle::getParkingDuration();
    return parkingDuration*0.85;
};