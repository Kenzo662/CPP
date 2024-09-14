#include <iostream>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

void ContactVerif(Phonebook rep, std::string command, int i, int restart)
{
    std::cout << "\n\nGive me a contact index between 1 and " << i << "\n";
    while (restart)
    {
        getline(std::cin, command);
        if ((atoi(command.c_str()) >= 1 && atoi(command.c_str()) <= i) && isdigit(command.c_str()[0]))
        {
            rep.PrintContact(&rep.contact[atoi(command.c_str()) - 1]);
            restart = 0;
        }
        else
            std::cout << "Please send me a valid index !" << std::endl;
    }
}

int main()
{
    std::cout << "Available features : \nADD: Register a new contact (up to 8).\n";
    std::cout << "SEARCH: Displays the list of contacts or the requested contact.\nEXIT : Exit the program.\n\n";
    std::cout << "Enter a command ...\n";

    std::string command;
    Phonebook rep;
    int i = 0;
    int restart = 1;

    while (1)
    {
        getline(std::cin, command);
        if ((command == "SEARCH" || command == "search") && !i)
            std::cout << "You must have at least 1 contact to use search\n\n" << "Enter a command : [ADD] [EXIT]" << std::endl;
        if (command == "ADD" || command == "add")
        {
            rep.SetAdd(&rep.contact[i++]);
            if (i == 7)
                i = 0;
            std::cout << "\nEnter a command : [ADD] [SEARCH] [EXIT]" << std::endl;
        }
        if ((command == "SEARCH" || command == "search") && i)
        {
            rep.PrintSearch(rep.contact, i);
            ContactVerif(rep, command, i, restart);
            std::cout << "\nEnter a command : [ADD] [SEARCH] [EXIT]" << std::endl;
        }
        if (command == "EXIT" || command == "exit")
            return 0;
    }
    return 0;
}

