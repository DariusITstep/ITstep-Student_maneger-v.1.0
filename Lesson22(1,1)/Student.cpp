#include "Student.h"

// ---------------- CONSTRUCTOR ----------------

Student::Student() {
    P = new PIP;

    // PIP
    strcpy_s((*P).firstName, "Empty");
    strcpy_s((*P).secondName, "Empty");
    strcpy_s((*P).fathersName, "Empty");

    // Education
    strcpy_s(E.nameE, "Empty");
    strcpy_s(E.cityE, "Empty");
    strcpy_s(E.countruE, "Empty");

    // Others
    strcpy_s(O.birthDate, "Empty");
    strcpy_s(O.phoneNumber, "Empty");
    strcpy_s(O.city, "Empty");
}

// ---------------- DESTRUCTOR ----------------

Student::~Student() {
    delete P;
}

// ---------------- SETTERS (PIP) ----------------

void Student::setFirstName(char newD[]) {
    strcpy_s((*P).firstName, newD);
}

void Student::setSecondName(char newD[]) {
    strcpy_s((*P).secondName, newD);
}

void Student::setFatherName(char newD[]) {
    strcpy_s((*P).fathersName, newD);
}

// ---------------- SETTERS (EDUCATION) ----------------

void Student::setEducationName(char newD[]) {
    strcpy_s(E.nameE, newD);
}

void Student::setEducationCity(char newD[]) {
    strcpy_s(E.cityE, newD);
}

void Student::setEducationCountru(char newD[]) {
    strcpy_s(E.countruE, newD);
}

// ---------------- SETTERS (OTHERS) ----------------

void Student::setBirthDate(char newD[]) {
    strcpy_s(O.birthDate, newD);
}

void Student::setPhoneNumber(char newD[]) {
    strcpy_s(O.phoneNumber, newD);
}

void Student::setCity(char newD[]) {
    strcpy_s(O.city, newD);
}

// ---------------- OUTPUT ----------------

void Student::showStudent() {

    cout << "\n--- STUDENT INFO ---\n";

    cout << "PIP: "
        << (*P).firstName << " "
        << (*P).secondName << " "
        << (*P).fathersName << endl;

    cout << "Education: "
        << E.nameE << ", "
        << E.cityE << ", "
        << E.countruE << endl;

    cout << "Others: "
        << O.birthDate << ", "
        << O.phoneNumber << ", "
        << O.city << endl;
}