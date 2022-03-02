#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string
#define getline std::getline
#define setw std::setw

class Contact
{
private:
    int     _index;
    string _firstname;
    string _lastname;
    string _nickname;
    string _phonenumber;
    string _darksecret;
    /* data */
public:
    Contact(void);
    int    Get_Index();
    string  Get_FirstName();
    string  Get_LastName();
    string  Get_NickName();
    string  Get_PhoneNumber();
    string  Get_DarkSecret();

    void Set_Index(int);
    void Set_FirstName(string first_Nmae);
    void Set_LastName(string last_Name);
    void Set_NickName(string Nick_Name);
    void Set_PhoneNumber(string Phone_Number);
    void Set_DarkSecret(string Dark_Secret);
};

#endif