#include <time.h>
#include <stdint.h>
#include "Bus.h"
#include "Vehicle.h"
using namespace std;
Bus::Bus(int id) : Vehicle(id) {};
int Bus::getParkingDuration(){
    int parkingDuration = Vehicle::getParkingDuration();
    return parkingDuration*0.75;  // return the duration of car's stay in the garage
};