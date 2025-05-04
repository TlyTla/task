#include"Database.h"
#include"Students.h"

#include<Windows.h>
#include<iostream>

std::string txt = "1.txt";
Database BD(txt);

void Start();
void System();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();

	return 0;
}

void Start() 
{
	using namespace std;

	cout << "По какому параметру будем сортировать?"<< endl;
	cout << "1 - По именам." << endl;
	cout << "2 - По фамилиям." << endl;
	cout << "3 - По номеру." << endl;
	cout << "0 - закрыть программу." << endl;
	cout << "Ввод:";

	string input;
	cin >> input;

	while (true)
	{
		if (input == "0")
		{
			break;
		}
		else if (input == "1")
		{
			BD.SortName();
			BD.PrintName();
			System();
		}
		else if (input == "2")
		{
			BD.SortSurname();
			BD.PrintSurname();
			System();
		}
		else if (input == "3")
		{
			BD.SortNumber();
			BD.PrintNumber();
			System();
		}
		else
		{
			cout << "Ошибка ввода!!!\n\n";
			System();
			continue;
		}
	}
}

void System()
{
	system("pause");
	system("cls");
	Start();
}
