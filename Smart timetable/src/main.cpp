#include <iostream>
#include "timetable.h"

using namespace std;



int main()
{
    TimetableSlot timetable[10];
    int choice;

    initializeTimetable(timetable, 10);

    do
    {
        cout << "\n===== TIMETABLE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Timetable Entry\n";
        cout << "2. View Timetable\n";
        cout << "3. Save Timetable to File\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            addTimetable(timetable, 10);
        }
        else if (choice == 2)
        {
            viewTimetable(timetable, 10);
        }
        else if (choice == 3)
        {
            saveTimetableToFile(timetable, 10);
        }
        else if (choice == 0)
        {
            cout << "Exiting program...\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
