#include "Contact.hpp"
#include "PhoneBook.hpp"



int main(void)
{
    int start = 1;
    string str;
    PhoneBook PhoneObj;

    while(start)
    {
        cout << "Enter a Command >";
        getline(cin, str);

        if(str == "ADD")
            PhoneObj.ADD();
        else if(str == "SEARCH")
            PhoneObj.SEARCH(1);
        else if (str == "EXIT"){ cout << str << " " "Bye; " << ln; start = 0;}
        
        else
            cout << "Bad Cmd" << ln;
    }
    return 0;
}