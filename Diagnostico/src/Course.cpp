#include <iostream>
#include <fstream>
#include "../include/course.h"

using namespace std;

Course::Course()
{
    
}


void Course::setIdentifier(int identifier)
{
    _identifier = identifier;
}
int Course::getIdentifier() const
{
    return _identifier;
}
void Course::setName(string name)
{
    _name = name;
}
string Course::getName() const
{
    return _name;
}

