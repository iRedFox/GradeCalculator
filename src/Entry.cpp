#include "Entry.h"

Entry::Entry(string t, float w) : type(t), weight(w/100) {}

float Entry::getTotal()
{
    total = total * weight;
    //cout << "total = " << total << endl;
    return total;
}

void Entry::addMark(float newMark)
{
    total += newMark;
}