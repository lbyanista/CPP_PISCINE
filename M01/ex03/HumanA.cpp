#include "HumanA.hpp"

//C&D

HumanA::HumanA(string name, Weapon &weapon) : _weapon(weapon) {
    this->_name = name;
}

HumanA::~HumanA(){}

//G&S

string HumanA::getName( void ) const{
    return (this->_name);
}

void    HumanA::setName(string name){
    this->_name = name;
}

Weapon HumanA::getWeapon(void) const{
    return (this->_weapon);
}

void    HumanA::setWeapon(Weapon weapon){
    this->_weapon = weapon;
}

//Member Funcs

void   HumanA::attack( void ) {
    cout << this->_name << " attacks with his " << this->_weapon.getType() << ln;
}