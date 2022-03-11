#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string

class Zombie
{
private:
    /* data */
    string name;
public:

    Zombie(string);
    ~Zombie(void);

    string  Get_name(void);
    void    Set_name(string);

    void announce(void);
};


#endif // !ZOMBIE_HPP