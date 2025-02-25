#include <iostream>
#include "Car.h"
#include "Bicycle.h"

//include Jet, Skateboard, and Motorcycle classes
#include "Jet.h"
#include "Skateboard.h"
#include "Motorcycle.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 6;
    int capacity = 15;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");

    //two test cases for each Jet, Skateboard, and Motorcycle
    vehiclesArray[6] = new Jet("Gulfstream", "G650", "aviation", 2);
    vehiclesArray[7] = new Jet("Boeing", "747", "Rocket", 4);
    vehiclesArray[8] = new Skateboard("Element", "Calavera");
    vehiclesArray[9] = new Skateboard("Flip", "Penny");
    vehiclesArray[10] = new Motorcycle("Yamaha", "VMax", "unleaded", "Four-cylinder");
    vehiclesArray[11] = new Motorcycle("Kawasaki", "ER-6N", "high octane", "Twin-cylinder");

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
