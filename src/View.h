#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include "Entry.h"
using namespace std;

class View
{
    public:
        int showMenu();
        Entry* readData(string&);
        void printStr(string);
};

#endif