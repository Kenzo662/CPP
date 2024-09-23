#include "../includes/Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR] : This is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::complain( std::string level )
{
    if (level != "DEBUG" && level != "ERROR" && level != "INFO" && level != "WARNING")
    {
        std::cout << "This level does not exist\navailable levels : [DEBUG] [ERROR] [INFO] [WARNING]" << std::endl;
        return ;
    }

    void    (Harl::*fTab[4])( void ) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string toComp[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};

    for (int i = 0; i < 4; i++)
    {
        if (level == toComp[i])
        {
            (this->*fTab[i])();
            break ;
        }
    }
}