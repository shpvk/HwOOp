#include <iostream>
#include "PhoneBook.h"
int main()
{
    Abonent* abonent = new Abonent[100];
    //abonent[0].Init("Holotov Yehor Aleksandrovich", 380944108777, 380944158666, "no info");
    //abonent[1].Init("Borz Leha Andreevich", 380944112377, 380944158666, "no info");
    //abonent[2].Init("Kosyanich Artem Kotletovich", 3809441123777, 3809123158666, "no info");


    char* name = nullptr;
    int work_phone = 0;
    int home_phone = 0;
    char* additional_info = nullptr;

    int abonent_index = 0;
    do
    {
        std::cout << "Enter name: ";
        name = new char[100];
        std::cin >> name;

        std::cout << "Enter work_phone: ";
        std::cin >> work_phone;

        std::cout << "Enter home_phone: ";
        std::cin >> home_phone;

        std::cout << "Enter additional_info: ";
        additional_info = new char[100];
        std::cin >> additional_info;

        std::cout << "Enter abonent index (0-100): ";
        std::cin >> abonent_index;
        

    } while (abonent_index != -1);

    delete[] name;
    delete[] additional_info;
}
