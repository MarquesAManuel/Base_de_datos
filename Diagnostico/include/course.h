#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
using namespace std;


class Course
{
    private:
    int _identifier;
    string _name;

    public:
    Course();

    void setIdentifier(int identifier);
    int getIdentifier()const; //Returns an int _identifier
    void setName(string name);
    string getName()const; //Returns a string _name
};

#endif