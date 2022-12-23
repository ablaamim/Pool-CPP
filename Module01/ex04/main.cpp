#include "Replace.hpp"

bool parser(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return(true);
    }
    if (argv[1][0] == '\0')
    {
        std::cout << "Error: file name is empty" << std::endl;
        return(true);
    }
    if (argv[2][0] == '\0')
    {
        std::cout << "Error: search string is empty" << std::endl;
        return(true);
    }
    if (argv[3][0] == '\0')
    {
        std::cout << "Error: replace string is empty" << std::endl;
        return(true);
    }
    return (false);
}

int main(int argc, char **argv)
{
    if (parser(argc, argv))
        return (1);
    Replace replace(argv[1], argv[2], argv[3]);
    replace.startReplace();
    return (0);
}