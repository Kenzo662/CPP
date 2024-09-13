#include <iostream>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

// FIRSTNAME
void Contact::SetFirstName(std::string input)
{
    this->_first_name = input;
}

std::string Contact::GetFirstName() const
{
    return this->_first_name;
}


// LASTNAME
void Contact::SetLastName(std::string input)
{
    this->_last_name = input;
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
void Contact::SetNumber(std::string input)
{
    this->_number = input;
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