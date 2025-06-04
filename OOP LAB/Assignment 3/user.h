#ifndef USER_H
#define USER_H

#include <string>
#include <stdexcept>

using namespace std;

enum UserType
{
    FACULTY,
    STUDENT
};

class User
{
protected:
    string id;
    string name;
    bool hasPaid;
    UserType type;

public:
    User(string id, string name, UserType type) : id(id), name(name), hasPaid(false), type(type) {}
    virtual ~User() {}
    virtual double calculateFare(bool isAC) const = 0;
    virtual string toFileString() const = 0;
    string getId() const { return id; }
    bool hasPaidFee() const { return hasPaid; }
    void setPaidStatus(bool status) { hasPaid = status; }
    UserType getUserType() const { return type; }
};

class Faculty : public User
{
public:
    Faculty(string id, string name) : User(id, name, FACULTY) {}
    double calculateFare(bool isAC) const override
    {
        return 3000 + (isAC ? 2000 : 0);
    }
    string toFileString() const override
    {
        return "FACULTY," + id + "," + name + "," + (hasPaid ? "1" : "0");
    }
};

class Student : public User
{
public:
    Student(string id, string name) : User(id, name, STUDENT) {}
    double calculateFare(bool isAC) const override
    {
        return 2000 + (isAC ? 2000 : 0);
    }
    string toFileString() const override
    {
        return "STUDENT," + id + "," + name + "," + (hasPaid ? "1" : "0");
    }
};

#endif
