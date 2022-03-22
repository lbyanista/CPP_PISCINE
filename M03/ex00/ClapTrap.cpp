#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    this->_Name = "Unknown";
    this->_Hpoint = 10;
    this->_Epoint = 10;
    this->_Attack_Dmg = 0;
    cout << "ClapTrap <" << "Unknown" << "> was created !!" << ln;
}

ClapTrap::ClapTrap(string name){
    this->_Name = name;
    this->_Hpoint = 10;
    this->_Epoint = 10;
    this->_Attack_Dmg = 0;
    cout << "ClapTrap <" << name<< "> was created !!" << ln;
}

void ClapTrap::attack(const string &target){
    if(this->_Hpoint > 0 || this->_Epoint > 0){
        this->_Hpoint--;
        cout << "ClappTrap " << this->_Name << "attack " << "causing " << this->takeDamage << 
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    this->_Hpoint--;
    this->_Hpoint += amount;
}

void ClapTrap::takeDamage(unsigned int amount){
    
}