#ifndef _DATABASE_
#define _DATABASE_

#include"Students.h"

#include<iostream>
#include<vector>
#include<format>
#include<fstream>
#include<string>
#include<sstream>
#include<Windows.h>


class Database final
{
public:
	explicit Database(std::string &txt);
	~Database();

	void SortName();
	void SortSurname();
	void SortNumber();

	void PrintName() const;
	void PrintSurname() const;
	void PrintNumber() const;


private:
	std::vector <Students *> people;
};

#endif // !_DATABASE_