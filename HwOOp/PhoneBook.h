#pragma once
class PhoneBook
{
private:
	char* full_name;
	int work_phone;
	int home_phone;
	char* additional_info;
public:
	PhoneBook();
	PhoneBook(const char* name, int work_phone, int home_phone, const char* additional_info);
	~PhoneBook();

	void Init(const char* name, int work_phone, int home_phone, const char* additional_info);
	void Print();
	
	void GetFullName();
	void GetWorkPhone();
	void GetHomePhone();
	void GetAdditionalInfo();

	const char* SetFullName();
	int SetWorkPhone();
	int SetFHomePhone();
	const char* SetAdditionalInfo();

};

