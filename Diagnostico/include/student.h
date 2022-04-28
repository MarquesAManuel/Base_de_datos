#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    private:
    int _identifier;
    string _name;
    string _surname;

    public:
    Student();

    void setIdentifier(int identifier);
    int getIdentifier() const; //Returns an int _identifier
    void setName(string name);
    string getName() const; //Returns a string _name
    void setSurname(string surname);
    string getSurname() const; //Returns a string _surname
};

#endif