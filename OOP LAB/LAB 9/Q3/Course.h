#ifndef COURSE
#define COURSE

#include"string"
using namespace std;

class Course{
    protected:
    string courseCode;
    int credits;
    
    public:
    Course(string code, int credit) : courseCode(code), credits(credit) {}
    virtual void displayInfo() = 0;
    virtual double calculateGrade() = 0;
    virtual ~Course() {}

};

#endif
