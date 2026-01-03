#include <iostream>
#include "timetable.h"


bool isValidDay(int day)
{
    return day >= 0 && day < DAYS;
}

bool isValidSlot(int slot)
{
    return slot >= 0 && slot < SLOTS;
}
 

void initializeTimetable(TimetableSlot table[], int size)
{
    for (int i = 0; i < size; i++)
    {
        table[i].subject = "";
        table[i].teacher = "";
        table[i].room = "";
        table[i].day = -1;
        table[i].slot = -1;
    }
}



void viewTimetable(TimetableSlot table[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<"Timetable:\n";

        if(table[i].subject != "")
        {
            cout <<"Day: " << table[i].day << endl;

            cout <<"Slot: " << table[i].slot << endl;

            cout <<"Teacher: " << table[i].teacher << endl;

            cout <<"Room: " << table[i].room << endl;

            cout << endl;
        }
    }
}

void teacherWiseTimetable(TimetableSlot table[], int size)
{
    string name;

    cout <<"Enter teacher name: ";
    getline(cin, name);

    for(int i = 0; i < size; i++)
    {
        if(table[i].teacher == name)
        {
            cout <<"Day: " << table[i].day << endl;

            cout <<"Slot: " << table[i].slot << endl;

            cout <<"Room: " << table[i].room << endl;

            cout << endl;
        }
    }
}

void roomWiseTimetable(TimetableSlot table[], int size)
{

}