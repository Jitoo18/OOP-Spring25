#include <iostream>
#include "TransportSystem.h"
using namespace std;

int main() {

    cout << "JITESH KUMAR (24K0871)" << endl;
    cout << "----------------------------------------------------------" << endl;

    
    TransportSystem system;
    
    // Register users
    system.registerUser(new Faculty("F1", "Dr. Ali"));
    system.registerUser(new Student("S1", "Jitesh Kumar"));
    system.registerUser(new Student("S2", "Harsh kumar"));

    // Add drivers
    system.addDriver(new Driver("D1", "Ahmed", "LIC123"));
    system.addDriver(new Driver("D2", "Bilal", "LIC456"));

    // Define routes
    system.addRoute(new Route("R1", "Main Campus", "City Campus", 60.0));
    system.addRoute(new Route("R2", "Gulshan", "North Campus", 45.0));

    // Create vehicles
    Driver* d1 = system.getDriverById("D1");
    Route* r1 = system.getRouteById("R1");
    system.addVehicle(new Bus("V1", "Nadeem", *d1, *r1, true));

    Driver* d2 = system.getDriverById("D2");
    Route* r2 = system.getRouteById("R2");
    system.addVehicle(new Coaster("V2", "Zulfiqar", *d2, *r2, false));

    // Make payments and book seats
    User* faculty = system.getUserById("F1");
    User* student1 = system.getUserById("S1");
    User* student2 = system.getUserById("S2");

    // Process payments
    faculty->setPaidStatus(true);
    student1->setPaidStatus(true);
    student2->setPaidStatus(true);

    // Get vehicles
    Vehicle* bus = system.getVehicleById("V1");
    Vehicle* coaster = system.getVehicleById("V2");

    // Display fare information
    cout << "Fare Details:\n";
    cout << "Faculty AC Bus Fare: " << faculty->calculateFare(true) << " PKR\n";
    cout << "Student Non-AC Coaster Fare: " << student1->calculateFare(false) << " PKR\n";

    system.saveData();
    cout << "\nSystem initialized successfully with:\n";
    cout << "- 3 registered users (1 faculty, 2 students)\n";
    cout << "- 2 drivers\n";
    cout << "- 2 routes\n";
    cout << "- 2 vehicles (1 bus, 1 coaster)\n";
    
    return 0;
}
