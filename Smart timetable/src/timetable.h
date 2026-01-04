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

void showMenu();
void initializeTimetable(TimetableSlot table[], int size);
bool isValidDay(int day);
bool isValidSlot(int slot);
void viewTimetable(TimetableSlot table[], int size);
void teacherWiseTimetable(TimetableSlot table[], int size);
void roomWiseTimetable(TimetableSlot table[], int size);
void saveTimetableToFile(TimetableSlot table[], int size);
void addTimetable(TimetableSlot table[], int size);
bool addTimetableEntry(TimetableSlot table[], int size, string subject, string teacher, string room, int day, int slot);

#endif