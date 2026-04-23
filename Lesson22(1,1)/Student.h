#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int maxSize = 31;

//ПІП
struct PIP {
	char firstName[maxSize]{ "Empty" };
	char secondName[maxSize]{ "Empty" };
	char fathersName[maxSize]{ "Empty" };
};

//Освіта
struct Education {
	char nameE[maxSize]{ "Empty" };
	char cityE[maxSize]{ "Empty" };
	char countruE[maxSize]{ "Empty" };
};

//Інше
struct Others {
	char birthDate[maxSize]{ "Empty" };
	char phoneNumber[maxSize]{ "Empty" };
	char city[maxSize]{ "Empty" };
};

class Student {

private:
	PIP P;
	Education E;
	Others O;
public:
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
	bool getValidInput(char* str, int size);
};

