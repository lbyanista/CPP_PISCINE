#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string
#define getline std::getline

class Contact
{
private:
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string dark_secret;
    /* data */
public:
    Contact(void);
    ~Contact(void);
    string Get_FirstName();
    string Get_LastName();
    string Get_NickName();
    string Get_PhoneNumber();
    string Get_DarkSecret();

    void Set_FirstName(string first_Nmae);
    void Set_LastName(string last_Name);
    void Set_NickName(string Nick_Name);
    void Set_PhoneNumber(string Phone_Number);
    void Set_DarkSecret(string Dark_Secret);
};

#endif