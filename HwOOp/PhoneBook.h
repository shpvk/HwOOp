#pragma once
class Abonent
{
private:
	char* full_name;
	int work_phone;
	int home_phone;
	char* additional_info;
public:
	Abonent();
	Abonent(const char* full_name, int work_phone, int home_phone, const char* additional_info);
	~Abonent();

	void Init(const char* full_name, int work_phone, int home_phone, const char* additional_info);
	void Print();
	void DeleteAbonent();
	
	const char* GetFullName();
	inline int GetWorkPhone();
	inline int GetHomePhone();
	const char* GetAdditionalInfo();

	void SetFullName(const char* full_name);
	void SetWorkPhone(int work_phone);
	void SetHomePhone(int home_phone);
	void SetAdditionalInfo(const char* additional_info);

};

