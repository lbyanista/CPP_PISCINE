#include <iostream>
#define string std::string
#define cout std::cout
#define ln std::endl

int main( void )
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    // Display Addresses;
    cout << "Address of str: " << &str << ln;
    cout << "Address of stringPTR: " << stringPTR << ln;
    cout << "Address of stringREF: " << &stringREF << ln;
   
    // display Content of string ;
    cout << "The value of the str: " << str << ln;
    cout << "The value pointed to by stringPTR: " << *stringPTR << ln;
    cout << "The value pointed to by stringREF: " << stringREF << ln;
   return 0;
}