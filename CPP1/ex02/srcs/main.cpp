#include <iostream>
#include <string>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory adress of the string variable : " << &str << "\n";
    std::cout << "Memory adress of the string pointer : " << stringPTR << "\n";
    std::cout << "Memory adress of the string ref : " << &stringREF << "\n";

    std::cout << "Value of the string variable : " << str << "\n";
    std::cout << "Value of the string pointer : " << *stringPTR << "\n";
    std::cout << "Value of the string ref : " << stringREF << "\n";
}