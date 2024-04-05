#include <time.h>
#include <stdint.h>
#include "Car.h"
#include "Vehicle.h"
using namespace std;
Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration(){
    
     int parkingDuration = Vehicle::getParkingDuration();
    return parkingDuration*0.9; 
};