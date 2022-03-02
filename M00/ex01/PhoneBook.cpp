#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_contacts = new Contact[8];
    this->_index_now = 0;
    this->_n = 0;
}

void PhoneBook::ADD_Contact(string firstname, string lastname, string nickname, string phonenumber, string darkestsecret) {
    if(this->_index_now == 8)
        this->_index_now = 0;
    this->_contacts[_index_now].Set_Index(this->_index_now);
    this->_contacts[_index_now].Set_FirstName(firstname);
    this->_contacts[_index_now].Set_LastName(lastname);
    this->_contacts[_index_now].Set_NickName(nickname);
    this->_contacts[_index_now].Set_PhoneNumber(phonenumber);
    this->_contacts[_index_now].Set_DarkestSecret(darkestsecret);

    if(this->_n < 8)
        this->_n++;
    this->_index_now++;
}

string PhoneBook::turncat(string str) const {
    if(str.length() > 10) {  str.resize(9); str.append("."); }
    return str;
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

void PhoneBook::Display_contact(int index) const{
    if (index >= this->_n || index < -1)
        cout << "\nIndex: " << index << " Not Found" << ln;
        // cout << "\nNo Index Found with " << index << ln;
    else
    {
        cout << "\nFirst name : " << this->_contacts[index].Get_FirstName() << ln;
        cout << "Last name : " << this->_contacts[index].Get_LastName() << ln;
        cout << "Nickname : " << this->_contacts[index].Get_NickName() << ln;
        cout << "Phone_number : " << this->_contacts[index].Get_PhoneNumber() << ln;
        cout << "Darkest_secret : " << this->_contacts[index].Get_DarkestSecret() << ln;
        cout << ln;
    }
}

void PhoneBook::Set_Data() {
    string firstname, lastname, nickname, phonenumber, darkestsecret;
    cout << "\nFirst name: "; getline(cin, firstname);
    cout << "Last name: "; getline(cin, lastname);
    cout << "Nickname: "; getline(cin, nickname);
    cout << "Phone number: "; getline(cin, phonenumber);
    cout << "Darkest secret: "; getline(cin, darkestsecret);
    ADD_Contact(firstname, lastname, nickname, phonenumber, darkestsecret);
    cout << "\nContact Added Successfully !\n" << ln;
}