#include "PhoneBook.h"
#include <iostream>
Abonent::Abonent()
{
	full_name = nullptr;
	work_phone = 0;
	home_phone = 0;
	additional_info = nullptr;
}

Abonent::Abonent(const char* full_name, int work_phone, int home_phone, const char* additional_info)
{
	if (this->full_name != nullptr)
	{
		delete[] this->full_name;
	}

	this->full_name = new char[strlen(full_name) + 1];
	strcpy_s(this->full_name, strlen(full_name) + 1, full_name);


	this->work_phone = work_phone;
	this->home_phone = home_phone;


	if (this->additional_info != nullptr)
	{
		delete[] this->additional_info;
	}

	this->additional_info = new char[strlen(additional_info) + 1];
	strcpy_s(this->additional_info, strlen(additional_info) + 1, additional_info);
}

Abonent::~Abonent()
{
	delete[] full_name;
	delete[] additional_info;
}

void Abonent::Init(const char* full_name, int work_phone, int home_phone, const char* additional_info)
{
	if (this->full_name != nullptr)
	{
		delete[] this->full_name;
	}

	this->full_name = new char[strlen(full_name) + 1];
	strcpy_s(this->full_name, strlen(full_name) + 1, full_name);


	this->work_phone = work_phone;
	this->home_phone = home_phone;


	if (this->additional_info != nullptr)
	{
		delete[] this->additional_info;
	}

	this->additional_info = new char[strlen(additional_info) + 1];
	strcpy_s(this->additional_info, strlen(additional_info) + 1, additional_info);
}

void Abonent::Print()
{
	std::cout << "Full name: " << full_name << std::endl;
	std::cout << "Work phone number: " << work_phone << std::endl;
	std::cout << "Home phone number: " << home_phone << std::endl;
	std::cout << "Additional Info : " << additional_info << std::endl;
}

void Abonent::DeleteAbonent()
{
	if (full_name != nullptr)
	{
		delete[] full_name;
	}
	if (additional_info != nullptr)
	{
		delete[] additional_info;
	}
	work_phone = 0;
	home_phone = 0;
}


const char* Abonent::GetFullName()
{
	return full_name;
}

inline int Abonent::GetWorkPhone()
{
	return work_phone;
}

inline int Abonent::GetHomePhone()
{
	return home_phone;
}

const char* Abonent::GetAdditionalInfo()
{
	return additional_info;
}

void Abonent::SetFullName(const char* full_name)
{
	if (this->full_name != nullptr)
	{
		delete[] this->full_name;
	}

	this->full_name = new char[strlen(full_name) + 1];
	strcpy_s(this->full_name, strlen(full_name) + 1, full_name);
}

void Abonent::SetWorkPhone(int work_phone)
{
	this->work_phone = work_phone;
}

void Abonent::SetHomePhone(int home_phone)
{
	this->home_phone = home_phone;
}

void Abonent::SetAdditionalInfo(const char* additional_info)
{
	if (this->additional_info != nullptr)
	{
		delete[] this->additional_info;
	}

	this->additional_info = new char[strlen(additional_info) + 1];
	strcpy_s(this->additional_info, strlen(additional_info) + 1, additional_info);
}


