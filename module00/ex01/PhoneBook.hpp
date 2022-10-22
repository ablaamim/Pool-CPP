#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "./Contact.hpp"

class PhoneBook
{
    public :
    PhoneBook(void);
    ~PhoneBook(void);
    void add(std::string firstName,
             std::string lastName,
             std::string nickname,
             std::string phoneNumber,
             std::string darkestSecret);
    void printAllContacts(void);

    void search(int index);

    int getContactsCount(void); // returns the number of contacts in the phonebook.
    private :
    int     _count;
    int     _index;
    Contact _contacts[8];

    void _printOneContact(Contact contact);
};

#endif // PHONEBOOK_HPP