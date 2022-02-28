#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}


void Contact::Set_FirstName(string First_name){ this->first_name = First_name; }

void Contact::Set_LastName(string Last_name){ this->last_name = Last_name; }

void Contact::Set_NickName(string nickname){ this->nickname = nickname; }

void Contact::Set_PhoneNumber(string phonenmuber){ this->phone_number = phonenmuber; }

void Contact::Set_DarkSecret(string darkSecret){ this->dark_secret = darkSecret; }

string Contact::Get_FirstName(void){ return this->first_name; }

string Contact::Get_LastName(void){ return this->last_name; }

string Contact::Get_NickName(void){ return this->nickname; }

string Contact::Get_PhoneNumber(void){ return this->phone_number; }

string Contact::Get_DarkSecret(void){ return this->dark_secret;}