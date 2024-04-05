#include <time.h>
#include <stdint.h>
#include "Vehicle.h"
using namespace std;
Vehicle::Vehicle(int ID): _ID(ID), _timeOfEntry(time(nullptr)){};
Vehicle::Vehicle(): _timeOfEntry(time(nullptr)){} ; //default constructor

int Vehicle::getID(){
    return _ID;
};
int Vehicle::getParkingDuration(){
    time_t currentTime = time(nullptr);
    int time = (currentTime - _timeOfEntry);
    return time ;  // return the duration of car's stay in the garage
};