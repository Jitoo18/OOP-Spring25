#ifndef DRIVER_H
#define DRIVER_H

#include <string>
using namespace std;

class Driver
{
private:
    string id;
    string name;
    string license;

public:
    Driver(string i, string n, string l) : id(i), name(n), license(l) {}
    string getId() const { return id; }
    string toFileString() const
    {
        return id + "," + name + "," + license;
    }
};

#endif
