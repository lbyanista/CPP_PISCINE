#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{

private:

    Contact *_contacts;
    int _n;
    int _index_now;
    
public:
    PhoneBook(void); //default constructor
    void ADD_Contact(string, string, string, string, string);
    string turncat(string) const;
    void Display_contact(int) const;
    void Display_contacts() const;
    int Set_Data();
    int is_Digit(const string str);
};

#endif 