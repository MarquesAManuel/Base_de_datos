#include <iostream>
#include <fstream>
#include "../include/attendanceManagement.h"

using namespace std;


void AttendanceManagement::takeAttendance(Student *student, Course *course, string date, bool attendance)
{
    ofstream studentsAttendance;

    Student _student = *student;
    Course _course = *course;

    studentsAttendance.open("StudentAttendanceList.csv");

    studentsAttendance << _student.getIdentifier() << "," << _student.getName() << "," 
    << _student.getSurname() << "," << _course.getIdentifier() << "," << _course.getName() << ","
    << date << "," << attendance << ",";

}

void AttendanceManagement::showAttendance()
{

}

