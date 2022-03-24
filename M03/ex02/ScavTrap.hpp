#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    string _Name;
    int _Hpoint;
    int _Epoint;
    int _Attack_Dmg;
public:
    ScavTrap();
    ScavTrap(string name);
    ~ScavTrap();
    void guardGate();
    void attack(const string &target);
};
#endif