#include <iostream>
#include <iomanip>
#include <cstring>
#include "Student.h"

using namespace std;

void Student::showStudent() {
	cout << "\nStudent info:\n";
	cout << "Full name:\n";
	cout << left << setw(25) << P.firstName << left << setw(25) << P.secondName << left << setw(25) << P.fathersName << endl;

	cout << "Education:\n";
	cout << "Colleg name: " << E.nameE << endl;
	cout << "Colleg city: " << E.cityE << endl;
	cout << "Colleg countru: " << E.countruE << endl;

	cout << "Other:\n";
	cout << "Birth: " << O.birthDate << endl;
	cout << "Phone: " << O.phoneNumber << endl;
	cout << "Lived: " << O.city << endl;
}

bool Student::getValidInput(char* str, int size) {
	while (true) {
		cout << "\nEnter string (max " << size - 1 << " chars) or Q to exit: ";
		cin.getline(str, size);

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "\nToo long! Try again." << endl;
			continue;
		}
		if ((str[0] == 'q' || str[0] == 'Q') && str[1] == '\0') {
			cout << "\nAbort enter!" << endl;
			break;
		}
		if (strlen(str) == 0) {
			cout << "\nEmpty input!" << endl;
			continue;
		}
		return true;
	}
	return false;
}

void Student::setFirstName(char newD[]) {
	strcpy_s(P.firstName, newD);
}
void Student::setSecondName(char newD[]) {
	strcpy_s(P.secondName, newD);
}
void Student::setFatherName(char newD[]) {
	strcpy_s(P.fathersName, newD);
}
void Student::setEducationName(char newD[]) {
	strcpy_s(E.nameE, newD);
}
void Student::setEducationCity(char newD[]) {
	strcpy_s(E.cityE, newD);
}
void Student::setEducationCountru(char newD[]) {
	strcpy_s(E.countruE, newD);
}
void Student::setBirthDate(char newD[]) {
	strcpy_s(O.birthDate, newD);
}
void Student::setPhoneNumber(char newD[]) {
	strcpy_s(O.phoneNumber, newD);
}
void Student::setCity(char newD[]) {
	strcpy_s(O.city, newD);
}


