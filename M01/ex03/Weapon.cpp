#include "Weapon.hpp"
    //C&D
Weapon::Weapon(){}

Weapon::Weapon(string type){
    this->type = type;
}

Weapon::~Weapon(){}
    //G&S
string Weapon::getType(void) const{
    return (this->type);
}
void    Weapon::setType(string type){
    this->type = type;
}