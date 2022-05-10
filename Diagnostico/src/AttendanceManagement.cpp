#include <iostream>
#include <fstream>
#include <string>
#include "../include/attendanceManagement.h"

using namespace std;

AttendanceManagement::AttendanceManagement()
{
    
}

void AttendanceManagement::takeAttendance(Student *student, Course *course, string date, bool attendance)
{
    ofstream studentsAttendance("StudentAttendanceList.csv");

    if (studentsAttendance.is_open())
    {
        studentsAttendance << "sep=," << endl;
        studentsAttendance << student->getIdentifier() << "," << student->getName() << ","
        << student->getSurname() << "," << course->getIdentifier() << "," << course->getName() << ","
        << date << "," << attendance << "," ;
        studentsAttendance << " ";

        studentsAttendance.close();
    }
    else cout << "Unable to open file ";  

}

void AttendanceManagement::showAttendance()
{
    string line;
    ifstream studentsAttendance("StudentAttendanceList.csv");
    if (studentsAttendance.is_open())
    {
        while( getline(studentsAttendance,line))
        {
            cout << line << endl;
            getchar();
        }

        studentsAttendance.close();
    }

    else cout << "Unable to open file ";


}

