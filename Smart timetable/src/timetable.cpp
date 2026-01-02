#include "timetable.h"



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
