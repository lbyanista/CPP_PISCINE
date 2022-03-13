#include "HumanB.hpp"

    //C&D

HumanB::HumanB(string name){
    this->_name = name; 
}

HumanB::~HumanB(){}

    //G&S

string HumanB::getName( void ) const{
    return (this->_name);
}

void    HumanB::setName(string name){
    this->_name = name;
}

Weapon *HumanB::getWeapon( void ) const{
    return (this->_weapon);
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}
    //Member Funcs

void   HumanB::attack( void ){
    cout << this->_name << " attacks with his " << this->_weapon->getType() << ln;
}