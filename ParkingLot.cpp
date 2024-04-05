#include <iostream>
#include "ParkingLot.h"
#include <time.h>
#include <stdint.h>
using namespace std;
ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
        vehicles = new Vehicle*[maxCapacity];
    }

    ParkingLot::~ParkingLot() {
        for (int i = 0; i < currentCount; ++i) {
            delete vehicles[i]; // Free memory for all parked vehicles
        }
        delete[] vehicles; // Free the array itself
    }

    int ParkingLot::getCount() {
        return currentCount;
    }

    void ParkingLot::parkVehicle(Vehicle* vehicle) {
        if (currentCount < maxCapacity) {
            vehicles[currentCount] = vehicle;
            currentCount++;
            
        } else {
            std::cout << "The lot is full" << std::endl;
        }
    }

    void ParkingLot::unparkVehicle(int vehicleID) {
        for (int i = 0; i < currentCount; ++i) {
            if (vehicles[i]->getID() == vehicleID) {
                delete vehicles[i]; // Free memory for the removed vehicle
                for (int j = i; j < currentCount - 1; ++j) {
                    vehicles[j] = vehicles[j + 1];
                }
                currentCount--;
               
                return;
            }
        }
        std::cout << "Vehicle not in the lot" << std::endl;
    }

    int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
        int count = -1;
        time_t currentTime = time(nullptr);
        for (int i = 0; i < currentCount; i++) {
            int duration = vehicles[i]->getParkingDuration();
            if (duration > maxParkingDuration) {
                count++;
            }
        }
        return count;
    }