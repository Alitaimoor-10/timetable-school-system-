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

void initializeTimetable(TimetableSlot table[], int size);
bool isValidDay(int day);
bool isValidSlot(int slot);
void viewTimetable(TimetableSlot table[], int size);
void teacherWiseTimetable(TimetableSlot table[], int size);
void roomWiseTimetable(TimetableSlot table[], int size);

#endif