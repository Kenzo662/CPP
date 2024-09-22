#include "../includes/Sed.h"

void    setLine(std::string& str, const std::string search, const std::string replace)
{
    std::size_t pos;
    pos = str.find(search);

    while (pos != std::string::npos)
    {
        str.erase(pos, search.length());
        str.insert(pos, replace);
        pos = str.find(search, pos + replace.length());
    }
}

