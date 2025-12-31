#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <string>
using namespace std;

struct Slot
{
    string subject;
    string teacher;
    string time;
    string room;
    string lectureType;
};

const int DAYS = 5;
const int SLOTS = 7;

void addTimetable(Slot timetable[DAYS][SLOTS]);
void viewTimetable(Slot timetable[DAYS][SLOTS]);
void updateTimetable(Slot timetable[DAYS][SLOTS]);
void deleteTimetable(Slot timetable[DAYS][SLOTS]);

#endif
