#include "PhoneBook.h"
#include <iostream>
PhoneBook::PhoneBook()
{
	full_name = nullptr;
	work_phone = 0;
	home_phone = 0;
	additional_info = nullptr;
}

PhoneBook::PhoneBook(const char* name, int work_phone, int home_phone, const char* additional_info)
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

PhoneBook::~PhoneBook()
{
	delete[] full_name;
	delete[] additional_info;
}

void PhoneBook::Init(const char* full_name, int work_phone, int home_phone, const char* additional_info)
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

void PhoneBook::Print()
{
	std::cout << "Full name: " << full_name << std::endl;
	std::cout << "Work phone number: " << work_phone << std::endl;
	std::cout << "Home phone number: " << home_phone << std::endl;
	std::cout << "Additional Info : " << additional_info << std::endl;
}


const char* PhoneBook::GetFullName()
{
	return full_name;
}

inline int PhoneBook::GetWorkPhone()
{
	return work_phone;
}

inline int PhoneBook::GetHomePhone()
{
	return home_phone;
}

const char* PhoneBook::GetAdditionalInfo()
{
	return additional_info;
}

void PhoneBook::SetFullName(const char* full_name)
{
	if (this->full_name != nullptr)
	{
		delete[] this->full_name;
	}

	this->full_name = new char[strlen(full_name) + 1];
	strcpy_s(this->full_name, strlen(full_name) + 1, full_name);
}

void PhoneBook::SetWorkPhone(int work_phone)
{
	this->work_phone = work_phone;
}

void PhoneBook::SetHomePhone(int home_phone)
{
	this->home_phone = home_phone;
}

void PhoneBook::SetAdditionalInfo(const char* additional_info)
{
	if (this->additional_info != nullptr)
	{
		delete[] this->additional_info;
	}

	this->additional_info = new char[strlen(additional_info) + 1];
	strcpy_s(this->additional_info, strlen(additional_info) + 1, additional_info);
}


