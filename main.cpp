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

	cout << "�� ������ ��������� ����� �����������?"<< endl;
	cout << "1 - �� ������." << endl;
	cout << "2 - �� ��������." << endl;
	cout << "3 - �� ������." << endl;
	cout << "0 - ������� ���������." << endl;
	cout << "����:";

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
			cout << "������ �����!!!\n\n";
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
