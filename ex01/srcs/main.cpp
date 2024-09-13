#include <iostream>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

int main()
{
    std::cout << "Available features : \nADD: Register a new contact (up to 8).\n";
    std::cout << "SEARCH: Displays the list of contacts or the requested contact.\nEXIT : Exit the program.\n\n";
    std::cout << "Enter a command ...\n";

    std::string command;
    Phonebook rep;
    int i = 0;

    while (1)
    {
        getline(std::cin, command);
        if (command == "ADD" || command == "add")
        {
            rep.SetAdd(&rep.contact[i]);
            i++;
            if (i == 7)
                i = 0;
        }
        if (command == "SEARCH" || command == "search")
        {
            rep.PrintSearch(rep.contact, i);
            if (i)
                std::cout << "\n\nGive me a contact index between 0 and " << i - 1 << "\n";
            else
                std::cout << "\n\nGive me a contact index between 0 and " << i << "\n";
            getline(std::cin, command);
            if ((atoi(command.c_str()) >= 0 && atoi(command.c_str()) <= i) && isdigit(command.c_str()[0]))
                rep.PrintContact(&rep.contact[atoi(command.c_str())]);
            else
            {
                std::cout << "Please send me a valid index !\n";
                std::cout << "You need to retype “search”." << std::endl;
            }
        }
        if (command == "EXIT" || command == "exit")
            return 0;
    }
    return 0;
}