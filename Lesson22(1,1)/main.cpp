#include <iostream>
#include <iomanip>
#include <cstring>
#include "Student.h"

using namespace std;

int main() {

    Student student;

    using Setter = void (Student::*)(char*);
    Setter setters[] = {
        &Student::setFirstName,
        &Student::setSecondName,
        &Student::setFatherName,
        &Student::setEducationName,
        &Student::setEducationCity,
        &Student::setEducationCountru,
        &Student::setBirthDate,
        &Student::setPhoneNumber,
        &Student::setCity
    };

    while (true) {

        student.showStudent();

        cout << "\nSelect operation:\n"
            << "1. Set firstname\n"
            << "2. Set secondname\n"
            << "3. Set fathername\n"
            << "4. Set college name\n"
            << "5. Set college city\n"
            << "6. Set college country\n"
            << "7. Set birth date\n"
            << "8. Set phone\n"
            << "9. Set city\n"
            << "0. Exit\n"
            << "Choice: ";

        char c;
        cin >> c;
        cin.ignore(); 

        if (c == '0') {
            cout << "Exit program...";
            break;
        }

        if (c < '1' || c > '9') {
            cout << "Invalid choice!\n";
            continue;
        }

        cout << "Enter data: ";

        char buffer[31];
        cin.getline(buffer, 31);

        if (strlen(buffer) == 0 || strlen(buffer) >= 31) {
            cout << "Invalid input!\n";
            continue;
        }

        int choice = c - '1';

        (student.*setters[choice])(buffer);

        cout << "Operation complete!\n";
    }

    return 0;
}