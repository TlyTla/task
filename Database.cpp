#include "Database.h"


Database::Database(std::string& txt)
{
	std::ifstream file;

	file.open(txt);

	if (!file.is_open())
	{
		throw std::runtime_error("Ошибка открытия файла");
	}
	else
	{
		std::string line;
	
		while (std::getline(file, line)) 
		{
			std::istringstream sstream(line);
			std::string name, surname;
			int number;

			std::getline(sstream, surname, ' '); 
			std::getline(sstream, name, ':'); 
			sstream >> number;

			Students* student = new Students();
			student->SetSurname(surname);
			student->SetName(name);
			student->SetNumber(number);

			people.push_back(student);
		}
	}
	file.close();
}

void Database::SortName()
{
	for (int i = 0; i < people.size() - 1; i++)
	{
		for (int j = 0; j < people.size() - i - 1; j++)
		{
			if (people[j]->GetName() > people[j + 1]->GetName())
			{
				std::swap(people[j], people[j + 1]);
			}
		}
	}
}

void Database::SortSurname()
{
	for (int i = 0; i < people.size() - 1; i++)
	{
		for (int j = 0; j < people.size() - i - 1; j++)
		{
			if (people[j]->GetSurname() > people[j + 1]->GetSurname())
			{
				std::swap(people[j], people[j + 1]);
			}
		}
	}
}

void Database::SortNumber()
{
	for (int i = 0; i < people.size() - 1; i++)
	{
		for (int j = 0; j < people.size() - i - 1; j++)
		{
			if (people[j]->GetNumber() > people[j + 1]->GetNumber())
			{
				std::swap(people[j], people[j + 1]);
			}
		}
	}
}

void Database::PrintName() const
{
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << "Имя:" << people.at(i)->GetName() << "\nФамилия:" << people.at(i)->GetSurname() << "\nНомер: " << people.at(i)->GetNumber()<< "\n\n";
	}
}

void Database::PrintSurname() const
{
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << "Фамилия: " << people.at(i)->GetSurname() << "\nИмя:" << people.at(i)->GetName() << "\nНомер: " << people.at(i)->GetNumber() << "\n\n";
	}
}

void Database::PrintNumber() const
{
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << "Номер: " << people.at(i)->GetNumber() << "\nФамилия: " << people.at(i)->GetSurname() << "\nИмя:" << people.at(i)->GetName() << "\n\n";
	}
}
