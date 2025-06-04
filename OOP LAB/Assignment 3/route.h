#ifndef ROUTE_H
#define ROUTE_H

#include <string>
using namespace std;

class Route
{
private:
    string id;
    string start;
    string end;
    double distance;

public:
    Route(string i, string s, string e, double d)
        : id(i), start(s), end(e), distance(d) {}
    string getId() const { return id; }
    bool isLongRoute() const { return distance >= 50.0; }
    string toFileString() const
    {
        return id + "," + start + "," + end + "," + to_string(distance);
    }
};

#endif
