#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define string std::string
#define cout std::cout
#define ln std::endl

class ClapTrap
{
protected:
    /* data */
    string _Name;
    int _Hpoint;
    int _Epoint;
    int _Attack_Dmg;
public:
    ClapTrap(void);
    ClapTrap(string name);
    ~ClapTrap();

    void attack(const string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif