#include <time.h>
#include <stdint.h>
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"
using namespace std;
int main() {
    ParkingLot parkingLot(10); // Create a parking lot with a capacity of 10

    // Park 5 Car objects
    for (int i = 0; i < 5; ++i) {
        parkingLot.parkVehicle(new Car(i + 1));
    }

    // Park 3 Bus objects
    for (int i = 0; i < 3; ++i) {
        parkingLot.parkVehicle(new Bus(i + 6)); // Start IDs from 6 for Bus
    }

    // Park 2 Motorbike objects
    for (int i = 0; i < 2; ++i) {
        parkingLot.parkVehicle(new Motorbike(i + 9)); // Start IDs from 9 for Motorbike
    }

    // Count and print the number of overstaying vehicles
    int maxParkingDuration = 15; // 15 seconds
    int overstayingCount = parkingLot.countOverstayingVehicles(maxParkingDuration);
    cout << "Number of overstaying vehicles: " << overstayingCount << endl;

    return 0;
}