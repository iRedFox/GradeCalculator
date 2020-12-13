#include "Control.h"

void Control::launch()
{
    int menuSelection;
    string courseName;

    while(true)
    {  
        menuSelection = view.showMenu();

        if (menuSelection == 0)
        {
            break;
        }
        else if (menuSelection == 1)
        {
            string yesOrNo = "";

            view.printStr("What's the course name? ");
            cin >> courseName;

            view.printStr("Tutorials? (Y|N) ");
            cin >> yesOrNo;
            createEntry(yesOrNo, "Tutorial");

            view.printStr("Assignments? (Y|N) ");
            cin >> yesOrNo;
            createEntry(yesOrNo, "Assignemnt");

            view.printStr("Midterm? (Y|N) ");
            cin >> yesOrNo;
            createEntry(yesOrNo, "Midterm");

            view.printStr("Final? (Y|N) ");
            cin >> yesOrNo;
            createEntry(yesOrNo, "Final");
        }
    }
    for (unsigned int i = 0; i < entries.size(); ++i)
    {
        total += entries[i]->getTotal();
    }
    
    Course* course = new Course(courseName, total);
    course->setFinal(total);
    cout << *course << endl;
}

void Control::createEntry(string& option, string type)
{
    if (option[0] == 'y' || option[0] == 'Y')
    {
        Entry* temp = view.readData(type);
        entries.push_back(temp);
        option = "";
    }
    option = "";
}