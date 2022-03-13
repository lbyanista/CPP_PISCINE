#include <iostream>
#include <fstream>
#define cout std::cout
#define ln std::endl
#define string std::string
#define fstream std::fstream 

int main(void)
{
    string s1, s2;
    fstream filetest;
    filetest.open("test.txt");
    filetest << "hello from here!";
    filetest.close();
    
    return 0;
}