#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course
{
    friend ostream& operator<<(ostream&, Course&);

    public:
        Course(string = "Unknown", float = 0.0);
        string getName();
        void setFinal(float);

    private:
        string name;
        float final;
};


#endif