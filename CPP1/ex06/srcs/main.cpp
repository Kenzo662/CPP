#include "../includes/Harl.hpp"

int main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Wrong numbers of parameters.\nUsage : [LEVEL].\navailable levels : [DEBUG] [INFO] [WARNING] [ERROR]." << std::endl; 
        return 1;
    }
    std::string arg(av[1]);
    if (!arg.compare("DEBUG") || !arg.compare("INFO") || !arg.compare("WARNING") || !arg.compare("ERROR"))
    {
        Harl harl;
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        switch (av[1][0])
        {
            case 'D':
                harl.complain(levels[0]);
            case 'I':
                harl.complain(levels[1]);
            case 'W':
                harl.complain(levels[2]);
            case 'E':
                harl.complain(levels[3]);
        }
    }
    else
        std::cout << "This level does not exist !\navailable levels : [DEBUG] [INFO] [WARNING] [ERROR]." << std::endl;
}