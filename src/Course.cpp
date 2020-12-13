#include "Course.h"

Course::Course(string n, float f) : name(n), final(f)
{
    //cout << "Course ctor() " << endl;
}

string Course::getName()
{
    return this->name;
}

void Course::setFinal(float f)
{
    this->final = f;
}

ostream& operator<<(ostream& output, Course& c)
{
    output << "Your final grade for: " << c.name << " is %" << c.final << endl;

    return output;
}