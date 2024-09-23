#include "../includes/Harl.hpp"

int main( void )
{
    Harl Harl;

    Harl.complain("DEBUG");
    std::cout << "\n";
    std::cout << "\n";
    Harl.complain("TEST");
    std::cout << "\n";
    std::cout << "\n";
    Harl.complain("WARNING");
    std::cout << "\n";
    std::cout << "\n";
    Harl.complain("ERROR");
    std::cout << "\n";
    std::cout << "\n";
    Harl.complain("INFO");
    std::cout << std::endl;
}