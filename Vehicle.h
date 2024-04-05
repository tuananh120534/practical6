#ifndef VEHICLE_H
#define VEHICLE_H
#include <time.h>
#include <stdint.h>
using namespace std;

class Vehicle{
    protected:
    int _ID;
time_t  _timeOfEntry;

public:
Vehicle(); //default constructor
Vehicle(int ID);
int getID();
int getParkingDuration() ;
};



#endif