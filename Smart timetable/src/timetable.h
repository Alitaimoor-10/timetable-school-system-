#ifndef TIMETABLE_H
#define TIMETABLE_H
#include <string>
using namespace std;

struct TimetableSlot {
    string subject;
    string teacher;
    string room;
    int day;
    int slot;
};
#endif