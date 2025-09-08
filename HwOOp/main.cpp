#include <iostream>
#include "PhoneBook.h"


void add_abonent(Abonent* a, int& arr_size)
{
    char* full_name = nullptr;
    int work_phone = 0;
    int home_phone = 0;
    char* additional_info = nullptr;
    int abonent_index = 0;

    std::cout << "Enter abonent index (0-100) (Enter -1 to EXIT):\n";
    std::cin >> abonent_index;

    if (abonent_index < -1 || abonent_index > 100)
    {
        std::cout << "Incorrect index" << std::endl;
        return;
    }
    else if (abonent_index == -1)
    {
        return;
    }
    std::cout << "Enter name: ";
    full_name = new char[101];
    std::cin >> full_name;

    std::cout << "Enter work_phone: ";
    std::cin >> work_phone;

    std::cout << "Enter home_phone: ";
    std::cin >> home_phone;

    std::cout << "Enter additional_info (one word): ";
    additional_info = new char[101];
    std::cin >> additional_info;


    a[abonent_index].Init(full_name, work_phone, home_phone, additional_info);
    arr_size++;

    delete[] full_name;
    delete[] additional_info;
}
void delete_abonent(Abonent* a, int& arr_size)
{
    int abonent_index;
    while (true)
    {
        std::cout << "Enter the abonent index you want to delete (-1 to EXIT):\n";
        std::cin >> abonent_index;

        if (abonent_index < -1 || abonent_index > 100)
        {
            std::cout << "Incorrect index\n";
            continue;
        }
        else if (abonent_index == -1)
        {
            break;
        }

        a[abonent_index].DeleteAbonent();
        arr_size--;
        std::cout << "\033[31mYou have deleted the abonent with index " << abonent_index << "\033[0m\n";
        std::cout << std::endl;
        break;
    }
}
void find_by_name(Abonent* a, int& arr_size)
{
    char* full_name = new char[101];
    std::cout << "Enter full name (one word)";
    std::cin >> full_name;

    for (int i = 0; i < arr_size; ++i)
    {
        if (full_name == nullptr)
        {
            return;
        }
        if (strcmp(full_name, a[i].GetFullName()) == 0)
        {
            std::cout << "The abonent with the index " << i << " matches the full name.\n";
        }
        else
        {
            std::cout << "No abonent with that name was found.\n";
        }
    }
    delete[] full_name;
}
void show_abonents(Abonent* a, int arr_size)
{
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << "Abonent " << i << ":\n";
        a[i].Print();
        std::cout << std::endl;
    }
}


int main()
{
    int arr_size = 0;
    short choice;
    Abonent* a1 = new Abonent[101];
    while (true)
    {
        std::cout << "Select one of the options\n";
        std::cout << "-1 to EXIT\n0 to add new abonent\n1 to delete abonent\n2 to find abonent by full name\n3 to show all abonents:\n";
        std::cin >> choice;
        if (choice < -1 || choice > 3)
        {
            std::cout << "incorrect choice";
            continue;
        }
        else if (choice == -1)
        {
            break;
        }
        
        switch (choice)
        {
        case -1:
            break;
        case 0:
            add_abonent(a1, arr_size);
            break;
        case 1:
            delete_abonent(a1, arr_size);
            break;
        case 2:
            find_by_name(a1, arr_size);
            break;
        case 3:
            show_abonents(a1, arr_size);
            break;
        default:
            break;
        }
    }

    return 0;
}
