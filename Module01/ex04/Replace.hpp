#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
    public:
        Replace(char *filename, char *search, char *replace);
        ~Replace();
        void    startReplace(void);
    private:
        std::string fileName;
        std::string newFileName;
        std::string oldString;
        std::string newString;
        std::string text;
        void    readFile(void);
        void    searchText(void);
        void    writeFile(void);
};

#endif