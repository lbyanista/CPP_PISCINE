#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    string _name;
public:
    //C&D

    HumanB(string);
    ~HumanB();

    //G&S

    string  getName(void) const;
    void    setName(string);
    Weapon *getWeapon(void) const;
    void    setWeapon(Weapon &);

    //Member Funcs
 
    void   attack( void );
};

#endif