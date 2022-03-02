#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_contacts = new Contact[8];
    this->_index_now = 0;
    this->_n = 0;
}

void PhoneBook::ADD_Contact(string firstname, string lastname, string nickname, string phonenumber, string darksecret){
    if(this->_index_now = 8)
        this->_index_now = 0;
    this->_contacts[_index_now].Set_Index(this->_index_now);
    this->_contacts[_index_now].Set_FirstName(firstname);
    this->_contacts[_index_now].Set_LastName(lastname);
    this->_contacts[_index_now].Set_NickName(nickname);
    this->_contacts[_index_now].Set_PhoneNumber(phonenumber);
    this->_contacts[_index_now].Set_DarkSecret(darksecret);

    if(this->_n < 8)
        this->_n++;
    this->_index_now++;
}

string PhoneBook::turncat(string str) const {
    if(str.length() > 10) { str.resize(9); str.append("."); return str;}
}

void PhoneBook::Display_contacts() const {
   cout << setw(10) << "Index" << "|";
   cout << setw(10) << "First name" << "|";
   cout << setw(10) << "Last name" << "|";
   cout << setw(10) << "Nickname" << ln;
   for (int i = 0; i < this->_n ; i++)
   {
       cout << setw(10) << this->_contacts[i].Get_Index() << "|";
       cout << setw(10) << turncat(this->_contacts[i].Get_FirstName()) << "|";
       cout << setw(10) << turncat(this->_contacts[i].Get_LastName()) << "|";
       cout << setw(10) << turncat(this->_contacts[i].Get_NickName()) << ln;
   }
   cout << ln;
}