#ifndef _STUDENTS_
#define _STUDENTS_

#include"Database.h"

#include<iostream>
#include<string>


class Students final
{
public:
	~Students() {}

	void SetName(const std::string& name) { this->name = name; };
	void SetNumber(const int& number) { this->number = number; };
	void SetSurname(const std::string& surname) { this->surname = surname; };

	std::string GetName() { return name; };
	std::string GetSurname() { return surname; };
	int GetNumber() { return number; };

private:
	std::string surname;
	std::string name;
	int number;
};

#endif // !_STUDENTS_