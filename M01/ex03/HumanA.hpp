#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    string _name;
public:
    //C&D
    HumanA(string , Weapon &weapon);
    ~HumanA();

    //G&S

    string  getName( void ) const;
    void    setName(string);
    Weapon  getWeapon( void ) const;
    void    setWeapon(Weapon);

    //member Funcs
     
    void   attack( void );
};

#endif