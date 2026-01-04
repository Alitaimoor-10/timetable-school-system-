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
bool addTimetableEntry(
    TimetableSlot table[],
    int size,
    string subject,
    string teacher,
    string room,
    int day,
    int slot
)
{
    if (!isValidDay(day) || !isValidSlot(slot))
    {
        return false;
    }

    for (int i = 0; i < size; i++)
    {
        if (table[i].day == -1 && table[i].slot == -1)
        {
            table[i].subject = subject;
            table[i].teacher = teacher;
            table[i].room = room;
            table[i].day = day;
            table[i].slot = slot;
            return true;
        }
    }

    return false;
}

void showMenu()
{
    cout << "\n===== TIMETABLE MANAGEMENT SYSTEM =====\n";
    cout << "1. Add Timetable Entry\n";
    cout << "2. View Timetable\n";
    cout << "3. View Teacher-wise Timetable\n";
    cout << "4. View Room-wise Timetable\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

#include <fstream>

void saveTimetableToFile(TimetableSlot table[], int size)
{
    ofstream file("timetable.txt");

    if (!file)
    {
        cout << "Error opening file for writing.\n";
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (table[i].day != -1)
        {
            file << table[i].day << " "
                 << table[i].slot << "\n"
                 << table[i].subject << "\n"
                 << table[i].teacher << "\n"
                 << table[i].room << "\n";
        }
    }

    file.close();
    cout << "Timetable saved to file successfully.\n";
}

void addTimetable(TimetableSlot table[], int size)
{
    int day;
    cout << "Enter day (0 to 4): ";
    cin >> day;
    if (!isValidDay(day))
    {
        cout << "Invalid day!\n";
        return;
    }
    int slot;
    cout << "Enter slot (0 to 3): ";
    cin >> slot;
    if (!isValidSlot(slot))
    {
        cout << "Invalid slot!\n";
        return;
    }
    string subject;
    cin.ignore();
    cout << "Enter subject: ";
    getline(cin, subject);
    string teacher;
    cout << "Enter teacher: ";
    getline(cin, teacher);
    string room;
    cout << "Enter room: ";
    getline(cin, room);
    table[i].day = day;
    table[i].slot = slot;
    table[i].subject = subject;
    table[i].teacher = teacher;
    table[i].room = room;
    cout << "Timetable entry added successfully.\n";
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
    cout << "Timetable:\n";
    for(int i = 0; i < size; i++)
    {
        if(table[i].subject != "")
        {
            cout <<"Subject: " << table[i].subject << endl;

            cout <<"Teacher: " << table[i].teacher << endl;

            cout <<"Room: " << table[i].room << endl;

            cout <<"Day: " << table[i].day << endl;

            cout <<"Slot: " << table[i].slot << endl;

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
            cout <<"Subject " << table[i].subject << endl;

            cout <<"Room: " << table[i].room << endl;

            cout <<"Day: " << table[i].day << endl;

            cout <<"Slot: " << table[i].slot << endl;

            cout << endl;
        }
    }
}

void roomWiseTimetable(TimetableSlot table[], int size)
{
    string roomName;

    cout<<"Enter room: ";
    getline(cin, roomName);

    for(int i = 0; i < size; i++)
    {
        if(table[i].room == roomName)
        {
            cout <<"Subject: " << table[i].subject << endl;

            cout <<"Teacher: " << table[i].teacher << endl;

            cout <<"Room: " << table[i].room << endl;

            cout <<"Day: " << table[i].day << endl;

            cout <<"Slot: " << table[i].slot << endl;

            cout << endl;
        }
    }
}