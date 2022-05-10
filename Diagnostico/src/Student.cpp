#include <iostream>
#include <fstream>
#include "../include/student.h"

using namespace std;

Student::Student()
{
    

}


void Student::setIdentifier(int identifier)
{
    _identifier = identifier;
}
int Student::getIdentifier() const
{
    return _identifier;
}
void Student::setName(string name)
{
    _name = name;
}
string Student::getName() const
{
    return _name;
}
void Student::setSurname(string surname)
{
    _surname = surname;
}
string Student::getSurname() const
{
    return _surname;
}



