#include "LabCourse.h"
#include"iostream"
using namespace std;


LabCourse::LabCourse(string code, int credit, double mid, double final)
:Course(code,credit),midterm(mid),finalExam(final) {}

void LabCourse::displayInfo()
{
    cout << "Lab Course: " << courseCode << endl << "Credits: " << credits << endl;
}

double LabCourse::calculateGrade()
{
    double Grade; 
    if((midterm < 0 || midterm > 100) || (finalExam < 0 || finalExam > 100 ))
    {
        cout<< "Invalid" << endl;
    } 
    else 
    {
        Grade = midterm*0.3 + finalExam*0.7;
        cout << "Lab Grade = " << Grade << endl;
    }
    return 0.0;
}
