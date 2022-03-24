#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    string _Name;
    int _Hpoint;
    int _Epoint;
    int _Attack_Dmg;
public:
    FragTrap(void);
    FragTrap(string name);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif