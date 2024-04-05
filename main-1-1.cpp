#include <time.h>
#include <stdint.h>
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
using namespace std;
int main(){
    int car, bus, motorbike;

   cout << "enter the number of car";
   cin >> car;
    cout << "enter the number of bus";
   cin >> bus;
    cout << "enter the number of motorbike";
   cin >> motorbike ;
   int vehicle = car + bus + motorbike;
Vehicle** listOfVehicle = new Vehicle*[vehicle];
   for (int i = 0; i < car; i++)
   {
    listOfVehicle[i] = new Car(i);
   }
      for (int i = car; i < car + bus; i++)
   {
    listOfVehicle[i] = new Bus(i);
   }
      for (int i = car+bus; i < vehicle; i++)
   {
    listOfVehicle[i] = new Motorbike(i);
   }
   for (int i = 0; i < vehicle; i++)
   {
    cout << listOfVehicle[i]->getParkingDuration();
   }
}