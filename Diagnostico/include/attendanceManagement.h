#ifndef ATTENDANCEMANAGMENT_H
#define ATTENDANCEMANAGMENT_H

#include <iostream>
#include <fstream>
#include "student.h"
#include "course.h"
using namespace std;

class AttendanceManagement
{
    private:

    public:
    AttendanceManagement();

    void takeAttendance(Student *student, Course *course, string date, bool attendance);
    void showAttendance(); //Returns al parameters that attendance gets
    
};


#endif