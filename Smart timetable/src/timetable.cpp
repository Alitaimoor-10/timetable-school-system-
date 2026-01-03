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
        if(table[i].subject != "")
        {
            cout << table[i].subject << endl;
        }
    }
}

void teacherWiseTimetable(TimetableSlot table[], int size)
{

}

void roomWiseTimetable(TimetableSlot table[], int size)
{

}