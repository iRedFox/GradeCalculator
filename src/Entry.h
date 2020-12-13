#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <vector>
using namespace std;

class Entry
{
    public:
        Entry(string = "Unknown", float = 0.0);
        float getTotal();
        void addMark(float newMark);
    private:
        string type;
        float weight;
        float total;
};

#endif