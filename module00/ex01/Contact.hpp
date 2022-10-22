#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact // Class to store the contact inforrmations.
{
    public :
    // Getters : return the value of the private attributes.
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
    // Setters : set the value of the private attributes.
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);
    private :
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};
#endif // CONTACT_HPP