#include "View.h"

int View::showMenu()
{
    int numOptions = 1;
    int selection = -1;

    cout << endl;
    cout << "(1) calculate mark" << endl;
    cout << "(0) Exit" << endl;

    while (selection < 0 || selection > numOptions)
    {
        cout << "Enter your selection: ";
        cin >> selection;
    }

    return selection;
}

Entry* View::readData(string& type)
{
    float weight, mark;
    int count;

    cout << "Enter the weight of " << type << " : ";
    cin >> weight;

    cout << "How many " << type << " do you have : ";
    cin >> count;

    Entry* tempEntry = new Entry(type, weight);

    for (int i = 0; i < count; ++i)
    {
        cout << i+1 << " " << type << " mark = ";
        cin >> mark;
        tempEntry->addMark(mark);
    }

    return tempEntry;
}

void View::printStr(string str)
{
    cout << str;
}