#ifndef LABCOURSE
#define LABCOURSE

#include"course.h"
#include"string"
using namespace std;

class LabCourse : public Course {

    
    double midterm, finalExam;
    
    public:
    
    LabCourse(string code,int credit,double mid,double final);
    void displayInfo();
    double calculateGrade();
    
    
};



#endif
