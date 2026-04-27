#include "Student.h"

// ----------- VALIDATION -----------
bool PIP::isValid(const char* str) {
    return (str && strlen(str) > 0 && strlen(str) < maxSize);
}

bool Education::isValid(const char* str) {
    return (str && strlen(str) > 0 && strlen(str) < maxSize);
}

bool Others::isValid(const char* str) {
    return (str && strlen(str) > 0 && strlen(str) < maxSize);
}

// ----------- PIP -----------
PIP::PIP() {
    strcpy_s(firstName, "Empty");
    strcpy_s(secondName, "Empty");
    strcpy_s(fathersName, "Empty");
}

bool PIP::setFirstName(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(firstName, str);
    return true;
}

bool PIP::setSecondName(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(secondName, str);
    return true;
}

bool PIP::setFatherName(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(fathersName, str);
    return true;
}

void PIP::show() const {
    cout << firstName << " " << secondName << " " << fathersName;
}

// ----------- Education -----------
Education::Education() {
    strcpy_s(nameE, "Empty");
    strcpy_s(cityE, "Empty");
    strcpy_s(countryE, "Empty");
}

bool Education::setName(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(nameE, str);
    return true;
}

bool Education::setCity(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(cityE, str);
    return true;
}

bool Education::setCountry(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(countryE, str);
    return true;
}

void Education::show() const {
    cout << nameE << ", " << cityE << ", " << countryE;
}

// ----------- Others -----------
Others::Others() {
    strcpy_s(birthDate, "Empty");
    strcpy_s(phoneNumber, "Empty");
    strcpy_s(city, "Empty");
}

bool Others::setBirthDate(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(birthDate, str);
    return true;
}

bool Others::setPhone(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(phoneNumber, str);
    return true;
}

bool Others::setCity(const char* str) {
    if (!isValid(str)) return false;
    strcpy_s(city, str);
    return true;
}

void Others::show() const {
    cout << birthDate << ", " << phoneNumber << ", " << city;
}

// ----------- Student (DELEGATION) -----------

bool Student::setFirstName(char d[]) {
    return pip.setFirstName(d);
}

bool Student::setSecondName(char d[]) {
    return pip.setSecondName(d);
}

bool Student::setFatherName(char d[]) {
    return pip.setFatherName(d);
}

bool Student::setEducationName(char d[]) {
    return edu.setName(d);
}

bool Student::setEducationCity(char d[]) {
    return edu.setCity(d);
}

bool Student::setEducationCountry(char d[]) {
    return edu.setCountry(d);
}

bool Student::setBirthDate(char d[]) {
    return oth.setBirthDate(d);
}

bool Student::setPhone(char d[]) {
    return oth.setPhone(d);
}

bool Student::setCity(char d[]) {
    return oth.setCity(d);
}

void Student::showStudent() const {
    cout << "\n--- STUDENT INFO ---\n";

    cout << "PIP: ";
    pip.show();

    cout << "\nEducation: ";
    edu.show();

    cout << "\nOthers: ";
    oth.show();

    cout << endl;
}