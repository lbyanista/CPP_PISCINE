#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}


void   PhoneBook::ADD()
{
    string input;

    cout << "enter fisrt name >" << ln;
    getline(cin, input);
    // cin >> input;
    this->Contact[0].Set_FirstName(input);

    cout << "enter last name >" << ln;
    getline(cin, input);
    // cin >> input;
    this->Contact[0].Set_LastName(input);

    cout << "enter nickname >" << ln;
    getline(cin, input);
    this->Contact[0].Set_NickName(input);

    cout << "enter a phonenuber >" << ln;
    getline(cin, input);
    this->Contact[0].Set_PhoneNumber(input);

    cout << "enter a dark secret >" << ln; 
    getline(cin, input);
    this->Contact[0].Set_DarkSecret(input);
}

void PhoneBook::SEARCH(int index)
{
    string input;

    cout << "enter an index >" << ln;
    getline(cin, input);

    if(index)
    {
        cout << " ----------------------------------------------" <<ln;
        cout << "| First Name| Last Name| Nickname| Phone Number|" << ln; 
        cout << " ----------------------------------------------" <<ln;
        cout << "  "<<this->Contact[0].Get_FirstName() << " ";
        cout << "  "<<this->Contact[0].Get_LastName() << " " << ln;

    }
}