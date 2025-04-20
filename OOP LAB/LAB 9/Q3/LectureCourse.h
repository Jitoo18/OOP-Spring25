#ifndef LECTURECOURSE
#define LECTURECOURSE

#include"course.h"

#include"string"
using namespace std;

class LectureCourse : public Course {

    double midterm, finalExam;

    public:

    LectureCourse(string code,int credit,double mid,double final);
    void displayInfo();
    double calculateGrade();

};


#endif
