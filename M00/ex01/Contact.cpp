#include "Contact.hpp"

Contact::Contact(void) {

    this->_index = -1;
    this->_firstname = "";
    this->_lastname = "";
    this->_nickname = "";
    this->_phonenumber = "";
    this->_darkestsecret = "";
}

int Contact::Get_Index(void) { return (this->_index); }
string Contact::Get_FirstName(void) { return (this->_firstname); }
string Contact::Get_LastName(void) { return (this->_lastname); }
string Contact::Get_NickName(void) { return (this->_nickname); }
string Contact::Get_PhoneNumber(void) { return (this->_phonenumber); }
string Contact::Get_DarkestSecret(void) { return (this->_darkestsecret); }

void Contact::Set_Index(int index) { this->_index = index; }
void Contact::Set_FirstName(string firstname) { this->_firstname = firstname; }
void Contact::Set_LastName(string lastname) { this->_lastname = lastname; }
void Contact::Set_NickName(string nickname) { this->_nickname = nickname; }
void Contact::Set_PhoneNumber(string phonenumber) { this->_phonenumber = phonenumber; }
void Contact::Set_DarkestSecret(string darkestsecret) { this->_darkestsecret = darkestsecret; }