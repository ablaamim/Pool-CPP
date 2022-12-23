#include "Replace.hpp"

Replace::Replace(char *filename, char *search, char *replace)
{
    this->fileName = filename;
    this->oldString = search;
    this->newString = replace;
    this->newFileName = this->fileName + ".replace";
}

Replace::~Replace()
{
}

void    Replace::startReplace(void)
{
    this->readFile();
    this->searchText();
    this->writeFile();
}

// read file and save it to text variable as string type.

void    Replace::readFile(void)
{
    std::ifstream   file(this->fileName);
    std::string     line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            this->text += line;
            this->text += "\n";
        }
        file.close();
    }
    else
    {
        std::cout << "Error: can't open file" << std::endl;
        exit(1);
    }
}

void    Replace::searchText(void)
{
    size_t  found = 0;

    while (found != std::string::npos)
    {
        found = this->text.find(this->oldString, found + 1);
        if (found != std::string::npos)
        {
            this->text.erase(found, this->oldString.length());
            this->text.insert(found, this->newString);
        }
    }
}

void    Replace::writeFile(void)
{
    std::ofstream   file(this->newFileName);

    if (file.is_open())
    {
        file << this->text;
        file.close();
    }
    else
    {
        std::cout << "Error: can't open file" << std::endl;
        exit(1);
    }
}