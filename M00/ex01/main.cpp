#include "PhoneBook.hpp"

void    Display_head()
{
    cout << setw(50) << " ------------ Welcome To The PhoneBook ----------------" << ln;
    cout << " /************** ADD:   add a contact /***************/" << ln;
    cout << " /************** EXIT:  to quit       /***************/" << ln;
    cout << "                   *You will lose ALL saved Contacts" << ln;
    cout << " /************** SEARCH: Display Contacts info /*****/" << "\n" << ln;
}

int main()
{
    PhoneBook *PhoneObj = new PhoneBook();
    string input;
    int start = 1;
    Display_head();
    while (start)
    {
        cout << "PhoneBook> ";
        getline(cin, input);
        if(input == "ADD") PhoneObj->Set_Data();

        else if (input == "SEARCH")
        {
            PhoneObj->Display_contacts();
            cout << "Enter Contact Index " << ln;
            do
            {   
                cout << "Index: ";
                getline(cin, input);
                if (!PhoneObj->is_Digit(input))
                    cout << "Please Enter A Valid Number !!" << ln;
            } while (!PhoneObj->is_Digit(input));
            PhoneObj->Display_contact(PhoneObj->MyStoi(input));
        }
        else if (input == "EXIT")
        {
            cout << " See u soon .. Bye!!" << ln;
            start = 0; ;
            delete PhoneObj;
        }
        else
            cout << "PLEASE ENTER A VALID COMMANDS (ADD, EXIT, SEARCH)!!\n" << ln;
    }
    return (0);
}
