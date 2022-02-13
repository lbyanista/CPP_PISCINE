#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#define cout std::cout
#define ln std::endl

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret;  
    /* data */
public:
    std::string Get_FirstName();
    std::string Get_LastName();
    std::string Get_NickName();
    std::string Get_PhoneNumber();
    std::string Get_DarkSecret();

    void Set_FirsName(std::string first_Nmae);
    void Set_LastName(std::string last_Name);
    void Set_NickName(std::string Nick_Name);
    void Set_PhoneNumber(std::string Phone_Number);
    void Set_DarkSecret(std::string Dark_Secret);
};

#endif