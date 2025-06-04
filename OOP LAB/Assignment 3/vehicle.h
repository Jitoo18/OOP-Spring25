#ifndef VEHICLE_H
#define VEHICLE_H

#include "Driver.h"
#include "Route.h"
#include "Seat.h"

using namespace std;

const int BUS_SEATS = 52;
const int COASTER_SEATS = 32;

class Vehicle
{
protected:
    string id;
    string transporter;
    Driver driver;
    Route route;
    bool ac;
    Seat *seats;
    int seatCount;

public:
    Vehicle(string i, string t, Driver d, Route r, bool isAC, int capacity)
        : id(i), transporter(t), driver(d), route(r), ac(isAC),
          seats(new Seat[capacity]), seatCount(capacity) {}

    virtual ~Vehicle() { delete[] seats; }

    string getId() const { return id; }
    virtual string getType() const = 0;

    Seat *getSeats() { return seats; }
    int getSeatCount() const { return seatCount; }

    string toFileString() const
    {
        return id + "," + transporter + "," + driver.getId() + "," +
               route.getId() + "," + (ac ? "1" : "0");
    }
};

class Bus : public Vehicle
{
public:
    Bus(string i, string t, Driver d, Route r, bool isAC)
        : Vehicle(i, t, d, r, isAC, BUS_SEATS)
    {
        for (int i = 0; i < BUS_SEATS; ++i)
        {
            seats[i] = Seat(i + 1, (i < 26 ? FACULTY_SEAT : STUDENT_SEAT));
        }
    }
    string getType() const override { return "BUS"; }
};

class Coaster : public Vehicle
{
public:
    Coaster(string i, string t, Driver d, Route r, bool isAC)
        : Vehicle(i, t, d, r, isAC, COASTER_SEATS)
    {
        for (int i = 0; i < COASTER_SEATS; ++i)
        {
            seats[i] = Seat(i + 1, (i < 16 ? FACULTY_SEAT : STUDENT_SEAT));
        }
    }
    string getType() const override { return "COASTER"; }
};

#endif
