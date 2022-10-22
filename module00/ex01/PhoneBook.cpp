#include "PhoneBook.hpp"

// init the static variable _count to 0. 
// This variable will be used to count the number of contacts in the phonebook.
// init the static variable _index to 0.
// This variable will be used to keep track of the index of the last contact added to the phonebook.

PhoneBook::PhoneBook(void) 
{
    this->_index = 0x0;
    this->_count = 0x0;
}

// destructor of the PhoneBook class.
PhoneBook::~PhoneBook(void)
{
    return ;
}

// add a new contact to the phonebook.
void    PhoneBook::add(std::string firstName,
                       std::string lastName,
                       std::string nickname,
                       std::string phoneNumber,
                       std::string darkestSecret)
{
    this->_contacts[this->_index].setFirstName(firstName);
    this->_contacts[this->_index].setLastName(lastName);
    this->_contacts[this->_index].setNickname(nickname);
    this->_contacts[this->_index].setPhoneNumber(phoneNumber);
    this->_contacts[this->_index].setDarkestSecret(darkestSecret);
    if (this->_count < 8)
        this->_count++;
    this->_index++;
    if (this->_index >= 8)
        this->_index %= 8;
}

int PhoneBook::getContactsCount(void)
{
    return (this->_count);
}

void    PhoneBook::search(int index)
{
    if (index >= 0x0 && index < this->_count && index < 8)
    {
        _printOneContact(this->_contacts[index]);
    }
    else
        std::cout << "Invalid index." << std::endl;
}

void    PhoneBook::_printOneContact(Contact contact)
{
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void    PhoneBook::printAllContacts(void)
{
    int i = 0x0;
    std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
    while (i < this->_count)
    {
        std::cout << std::setw(10) << i << "|";
        if (this->_contacts[i].getFirstName().length() > 10)
            std::cout << this->_contacts[i].getFirstName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << this->_contacts[i].getFirstName() << "|";
        if (this->_contacts[i].getLastName().length() > 10)
            std::cout << this->_contacts[i].getLastName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << this->_contacts[i].getLastName() << "|";
        if (this->_contacts[i].getNickname().length() > 10)
            std::cout << this->_contacts[i].getNickname().substr(0, 9) << "." << std::endl;
        else
            std::cout << std::setw(10) << this->_contacts[i].getNickname() << std::endl;
        i++;
    }
}