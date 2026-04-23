#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int maxSize = 31;

// ---------------- STRUCTS ----------------

struct PIP {
    char firstName[maxSize];
    char secondName[maxSize];
    char fathersName[maxSize];
};

struct Education {
    char nameE[maxSize];
    char cityE[maxSize];
    char countruE[maxSize];
};

struct Others {
    char birthDate[maxSize];
    char phoneNumber[maxSize];
    char city[maxSize];
};

// ---------------- CLASS ----------------

class Student {

private:
    PIP* P;
    Education E;
    Others O;

public:
    Student();
    ~Student();

    void showStudent();

    void setFirstName(char newD[]);
    void setSecondName(char newD[]);
    void setFatherName(char newD[]);

    void setEducationName(char newD[]);
    void setEducationCity(char newD[]);
    void setEducationCountru(char newD[]);

    void setBirthDate(char newD[]);
    void setPhoneNumber(char newD[]);
    void setCity(char newD[]);
};