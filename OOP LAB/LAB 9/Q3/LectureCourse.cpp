#include "LectureCourse.h"
#include "iostream"
using namespace std;

LectureCourse::LectureCourse(string code, int credit, double mid, double final) 
 : Course (code, credit), midterm(mid),finalExam(final){}

void LectureCourse::displayInfo()
{
    cout << "Lecture Course: " << courseCode << endl << "Credits: " << credits << endl;
}

double LectureCourse::calculateGrade()
{
    double Grade; 
    if((midterm < 0 || midterm > 100) || (finalExam < 0 || finalExam > 100 ))
    {
        cout << "Invalid" <<endl;
    } 
    else 
    {
        Grade = midterm*0.4 + finalExam*0.6;
        cout << "Lecture Grade = " << Grade << endl;
    }

    return 0.0;
}
