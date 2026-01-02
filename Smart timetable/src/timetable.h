#ifndef TIMETABLE_H
#define TIMETABLE_H
#include <string>
using namespace std;

const int DAYS = 5;
const int SLOTS = 4;


struct TimetableSlot {
    string subject;
    string teacher;
    string room;
    int day;
    int slot;
};
#endif