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

    // Park vehicles until the lot is full
    while (parkingLot.getCount() < 10) {
        int vehicleType;
        std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> vehicleType;
        
        switch (vehicleType) {
            case 1:
                parkingLot.parkVehicle(new Car(parkingLot.getCount() + 1));
                break;
            case 2:
                parkingLot.parkVehicle(new Bus(parkingLot.getCount() + 1));
                break;
            case 3:
                parkingLot.parkVehicle(new Motorbike(parkingLot.getCount() + 1));
                break;
            default:
                std::cout << "Invalid vehicle type." << std::endl;
        }
    }
    int vehicleID;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> vehicleID;
    parkingLot.unparkVehicle(vehicleID);

    return 0;
}