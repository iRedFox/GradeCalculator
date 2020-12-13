#ifndef CONTROL_H
#define CONTROL_H

#include <iostream>
#include "View.h"
#include "Course.h"
#include "Entry.h"
using namespace std;

class Control
{
    public:
        void launch();
        void createEntry(string&, string);
    private:
        View view;
        float total;
        vector<Entry*> entries;

};


#endif