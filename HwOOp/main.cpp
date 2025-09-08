#include <iostream>
#include "PhoneBook.h"
int main()
{
    Abonent* abonent = new Abonent[3];
    abonent[0].Init("Holotov Yehor Aleksandrovich", 380944108777, 380944158666, "no info");
    abonent[1].Init("Borz Leha Andreevich", 380944112377, 380944158666, "no info");
    abonent[2].Init("Kosyanich Artem Kotletovich", 3809441123777, 3809123158666, "no info");

}
