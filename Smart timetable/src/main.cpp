#include <iostream>
#include "timetable.h"

using namespace std;

void addTimetable(TimetableSlot table[], int size)
{
}







int main()
{
    TimetableSlot timetable[10];

    initializeTimetable(timetable, 10);

    addTimetableEntry(
        timetable,
        10,
        "Programming Fundamentals",
        "Sir Nouman",
        "Lab 1",
        0,
        1
    );

    viewTimetable(timetable, 10);

    return 0;
}
