#include <iostream>
#include "timetable.h"

using namespace std;

int main()
{
    const int SIZE = 100;
    TimetableSlot table[SIZE];

    initializeTimetable(table, SIZE);

    int choice;
    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addTimetable(table, SIZE);
            break;
        case 2:
            viewTimetable(table, SIZE);
            break;
        case 3:
            teacherWiseTimetable(table, SIZE);
            break;
        case 4:
            roomWiseTimetable(table, SIZE);
            break;
        case 5:
            saveTimetableToFile(table, SIZE);
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}