#include <iostream>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

void Phonebook::PrintSearch(Contact *contact, int count) const
{
    int size = 0;

    std::string sub;
    std::cout << "\n____________________________________________\n";
    std::cout << "  index   | 1st Name | LastName | NickName |\n";
    std::cout << "____________________________________________\n";
    for (int index = 0; index < count; index++)
    {
        if (contact[index].GetFirstName().size() > 10)
        {
            sub = contact[index].GetFirstName().substr(0, 9);
            sub.insert(9, ".");
        }
        else
        {
            sub = contact[index].GetFirstName();
            size = sub.size() - 1;
            while (++size < 10)
                sub.insert(sub.size(), " ");
        }
        std::cout << "    " << index << "     |" << sub << "|";
        if (contact[index].GetLastName().size() > 10)
        {
            sub = contact[index].GetLastName().substr(0, 9);
            sub.insert(9, ".");
        }
        else
        {
            sub = contact[index].GetLastName();
            size = sub.size() - 1;
            while (++size < 10)
                sub.insert(sub.size(), " ");
        }
        std::cout << sub << "|";
        if (contact[index].GetNickname().size() > 10)
        {
            sub = contact[index].GetNickname().substr(0, 9);
            sub.insert(9, ".");
        }
        else
        {
            sub = contact[index].GetNickname();
            size = sub.size() - 1;
            while (++size < 10)
                sub.insert(sub.size(), " ");
        }
        std::cout << sub << "|" << std::endl;
    }
}

void Phonebook::SetAdd(Contact *contact)
{
    std::string input;

    std::cout << "What is your first name ?\n";
    getline(std::cin, input);
    contact->SetFirstName(input);
    std::cout << "What is your last name ?\n";
    getline(std::cin, input);
    contact->SetLastName(input);
    std::cout << "What is your NickName ?\n";
    getline(std::cin, input);
    contact->SetNickname(input);
    std::cout << "What is your Number ?\n";
    getline(std::cin, input);
    contact->SetNumber(input);
    std::cout << "What is your Darkest Secret ?" << std::endl;
    getline(std::cin, input);
    contact->SetDarkSecret(input);
}

void Phonebook::PrintContact(Contact *contact) const
{
    std::cout << "First name : " << contact->GetFirstName() << "\n";
    std::cout << "Last name : " << contact->GetLastName() << "\n";
    std::cout << "Nickname : " << contact->GetNickname() << "\n";
    std::cout << "Number : " << contact->GetNumber() << "\n";
    std::cout << "Darkest secret : " << contact->GetDarkSecret() << std::endl;
}
