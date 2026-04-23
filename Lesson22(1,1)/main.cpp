#include <iostream>
#include <iomanip>
#include <cstring>
#include "Student.h"

using namespace std;

int main() {

	Student student;

	using Setter = void (Student::*)(char*);
	Setter setters[] = { &Student::setFirstName,
						 &Student::setSecondName,
						 &Student::setFatherName,
						 &Student::setEducationName,
						 &Student::setEducationCity,
						 &Student::setEducationCountru,
						 &Student::setBirthDate,
						 &Student::setPhoneNumber,
						 &Student::setCity };

	while (true) {

		student.showStudent();

		cout << "\nSelect operation:\n";
		cout << "Person:\n"
			<< "1. Set firstname student\n"
			<< "2. Set secondname student\n"
			<< "3. Set fathername student\n"
			<< "\nEducation:\n"
			<< "4. Set name colleg\n"
			<< "5. Set city colleg\n"
			<< "6. Set countru colleg\n"
			<< "\nOthers:\n"
			<< "7. Set birth data\n"
			<< "8. Set phone\n"
			<< "9. Set city\n"
			<< "0. Exit program\n"
			<< "Choice: ";

		char c[10];
		cin.getline(c, 10);

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "\nInvalid input!" << endl;
			continue;
		}

		if (c[0] == '0') {
			cout << "Exit program...";
			break;
		}

		if (c[0] < '1' || c[0] > '9' || strlen(c) != 1) {
			cout << "Invalid choice...";
			continue;
		}

		int choice = c[0] - '0';

		cout << "Enter data: ";
		char buffer[31];
		if (!student.getValidInput(buffer, 31)) continue;

		(student.*setters[choice - 1])(buffer);
		cout << "Operation complete!" << endl;
		continue;
	}

	return 0;
}