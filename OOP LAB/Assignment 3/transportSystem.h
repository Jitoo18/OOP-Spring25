#ifndef TRANSPORT_SYSTEM_H
#define TRANSPORT_SYSTEM_H

#include "GenericList.h"
#include "User.h"
#include "Driver.h"
#include "Route.h"
#include "Vehicle.h"

using namespace std;

class TransportSystem
{
private:
    GenericList<User> users;
    GenericList<Driver> drivers;
    GenericList<Route> routes;
    GenericList<Vehicle> vehicles;

public:
    // User management
    void registerUser(User *user) { users.add(user); }
    User *getUserById(string id) { return users.getById(id); }

    // Driver management
    void addDriver(Driver *driver) { drivers.add(driver); }
    Driver *getDriverById(string id) { return drivers.getById(id); }

    // Route management
    void addRoute(Route *route) { routes.add(route); }
    Route *getRouteById(string id) { return routes.getById(id); }

    // Vehicle management
    void addVehicle(Vehicle *vehicle) { vehicles.add(vehicle); }
    Vehicle *getVehicleById(string id) { return vehicles.getById(id); }

    void saveData()
    {
        users.saveToFile("users.txt");
        drivers.saveToFile("drivers.txt");
        routes.saveToFile("routes.txt");
        vehicles.saveToFile("vehicles.txt");
    }
};

#endif
