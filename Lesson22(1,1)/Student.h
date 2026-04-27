#pragma once
#include <iostream>
#include <cstring>

using namespace std;

const int maxSize = 31;

// ----------- PIP -----------
class PIP {
private:
    char firstName[maxSize];
    char secondName[maxSize];
    char fathersName[maxSize];

    bool isValid(const char* str);

public:
    PIP();

    bool setFirstName(const char* str);
    bool setSecondName(const char* str);
    bool setFatherName(const char* str);

    void show() const;
};

// ----------- Education -----------
class Education {
private:
    char nameE[maxSize];
    char cityE[maxSize];
    char countryE[maxSize];

    bool isValid(const char* str);

public:
    Education();

    bool setName(const char* str);
    bool setCity(const char* str);
    bool setCountry(const char* str);

    void show() const;
};

// ----------- Others -----------
class Others {
private:
    char birthDate[maxSize];
    char phoneNumber[maxSize];
    char city[maxSize];

    bool isValid(const char* str);

public:
    Others();

    bool setBirthDate(const char* str);
    bool setPhone(const char* str);
    bool setCity(const char* str);

    void show() const;
};

// ----------- Student -----------
class Student {
private:
    PIP pip;
    Education edu;
    Others oth;

public:
    bool setFirstName(char d[]);
    bool setSecondName(char d[]);
    bool setFatherName(char d[]);

    bool setEducationName(char d[]);
    bool setEducationCity(char d[]);
    bool setEducationCountry(char d[]);

    bool setBirthDate(char d[]);
    bool setPhone(char d[]);
    bool setCity(char d[]);

    void showStudent() const;
};