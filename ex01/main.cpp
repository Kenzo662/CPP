#include <iostream>
#include <string>
#include "includes/Contact.hpp"
#include "includes/PhoneBook.hpp"
#include <stdio.h>

int main()
{
    std::cout << "Available features : \nADD: Register a new contact (up to 8).\n";
    std::cout << "SEARCH: Displays the list of contacts or the requested contact.\nEXIT : Exit the program.\n\n";
    std::cout << "Enter a command ...\n";

    //char buf[4096];
    std::string command;


    while (1)
    {
        getline(std::cin, command);
        if (command == "ADD")
        {
            printf("aaaaaaaaaa\n");
        }
    }0
}