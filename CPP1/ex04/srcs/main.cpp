#include "../includes/Sed.h"


int main(int ac, char **av)
{
    if (ac == 4)
    {  
        std::string r_file(av[1]);
        std::string search(av[2]);
        std::string replace(av[3]);
        std::ifstream file(av[1]);
        std::string line;

        if (!file.is_open()) 
        {
            std::cout << "Error: Unable to open file." << std::endl;
            return 1;
        }
        if (r_file.find('.') != std::string::npos)
            r_file.erase(r_file.find('.'));
        std::ofstream newFile(r_file.append(".replace"));
        while (std::getline(file, line))
        {
           setLine(line, search, replace);
           newFile << line << std::endl;
        }
        file.close();
        newFile.close();
    }
    else
        std::cout << "Wrong numbers of parameters !\nUsage : [file] [toSearch] [toReplace]." << std::endl;
}