#include "iostream"
#include "LectureCourse.h"
#include "LabCourse.h"

using namespace std;

int main()
{

    Course *c1 = new LectureCourse("CS1001", 3, 80, 76);
    Course *c2 = new LabCourse("CL1001", 1, 85, 82);

  // displaying course details....
    c1->displayInfo();
    c2->displayInfo();

  // displaying grades....
    c1->calculateGrade();
    c2->calculateGrade();

    return 0;
}
