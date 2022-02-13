#include "Contact.hpp"

void Contact::Set_FirsName(std::string First_name){ this->first_name = First_name; }

void Contact::Set_LastName(std::string Last_name){ this->last_name = Last_name; }

void Contact::Set_NickName(std::string nickname){ this->nickname = nickname; }

void Contact::Set_PhoneNumber(std::string phonenmuber){ this->phone_number = phonenmuber; }

void Contact::Set_DarkSecret(std::string darkSecret){ this->dark_secret = darkSecret; }

std::string Contact::Get_FirstName(void){ return this->first_name; }

std::string Contact::Get_LastName(void){ return this->last_name; }

std::string Contact::Get_NickName(void){ return this->nickname; }

std::string Contact::Get_PhoneNumber(void){ return this->phone_number; }

std::string Contact::Get_DarkSecret(void){ return this->dark_secret;}