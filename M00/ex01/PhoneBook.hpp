#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"
#define cout std::cout
#define ln std::endl

class PhoneBook
{

public:
    Contact Contact[8];
    void ADD(int number);
    void SEARCH()
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}


#endif 