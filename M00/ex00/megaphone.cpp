#include <iostream>
#define cout std::cout
#define ln std::endl

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << ln;
        return 0;
    }

    for (int i = 1; i < ac; i++)
       for (int j = 0; av[i][j]; j++)
           cout << (char)toupper(av[i][j]);
    cout << ln;
    
    return 0;
}