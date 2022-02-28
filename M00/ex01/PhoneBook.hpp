#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{

private:

    Contact Contact[8];
    
public:
    PhoneBook(void); //default constructor
    ~PhoneBook(void); //default destructor
    void ADD(void);
    void SEARCH(int index);
    void EXIT(void);
};

// PhoneBook::PhoneBook(/* args */)
// {
// }

// PhoneBook::~PhoneBook()
// {
// }


#endif 