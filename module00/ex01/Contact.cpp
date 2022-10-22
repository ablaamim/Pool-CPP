# include "Contact.hpp"

std::string Contact::getFirstName(void)
{
    return (this->_firstName);
}

std::string Contact::getLastName(void)
{
    return (this->_lastName);
}

std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}