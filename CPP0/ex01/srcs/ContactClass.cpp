#include <iostream>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>
#include <cctype>

// FIRSTNAME
int Contact::SetFirstName(std::string input)
{
    if (this->VerifInputString(input) == 1)
        {
            std::cout << "Send a valid Name please\n";
            return 1;
        }
    this->_first_name = input;
    return 0;
}

std::string Contact::GetFirstName() const
{
    return this->_first_name;
}


// LASTNAME
int Contact::SetLastName(std::string input)
{
    if (this->VerifInputString(input) == 1)
        {
            std::cout << "Send a valid Name please\n";
            return 1;
        }
    this->_last_name = input;
    return 0;
}

std::string Contact::GetLastName() const
{
    return this->_last_name;
}


// NICKNAME
void Contact::SetNickname(std::string input)
{
    this->_nickname = input;
}

std::string Contact::GetNickname() const
{
    return this->_nickname;
}


// NUMBER
int Contact::SetNumber(std::string input)
{
     if (this->VerifInputNumber(input) == 1)
        {
            std::cout << "Send a digit number please\n";
            return 1;
        }
    this->_number = input;
    return 0;
}

std::string Contact::GetNumber() const
{
    return this->_number;
}


// DARKSECRET
void Contact::SetDarkSecret(std::string input)
{
    this->_dark_secret = input;
}

std::string Contact::GetDarkSecret() const
{
    return this->_dark_secret;
}

int Contact::VerifInputNumber(std::string input)
{
    for(int i = 0; input.c_str()[i]; i++)
    {
        if (isdigit(input.c_str()[i]) == 0)
            return 1;
    }
    return 0;
}

int Contact::VerifInputString(std::string input)
{
    for(int i = 0; input.c_str()[i]; i++)
    {
        if (isalpha(input.c_str()[i]) == 0)
            return 1;
    }
    return 0;
}