#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    this->_Name = "Unknown";
    this->_Hpoint = 10;
    this->_Epoint = 10;
    this->_Attack_Dmg = 0;
    cout << "ClapTrap " << "Unknown" << " was created !!" << ln;
}

ClapTrap::ClapTrap(string name){
    this->_Name = name;
    this->_Hpoint = 10;
    this->_Epoint = 10;
    this->_Attack_Dmg = 0;
    cout << "ClapTrap " << name << " was created !!" << ln;
}

void ClapTrap::attack(const string &target){
    if(this->_Hpoint > 0 || this->_Epoint > 0){
        this->_Epoint--;
        this->_Hpoint -= _Attack_Dmg;
        cout << "ClappTrap " << this->_Name << " attack " << target << " causing " << _Attack_Dmg << " points of damage!" << ln; 
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->_Hpoint > 0 || this->_Epoint > 0){
    this->_Epoint--;
    this->_Hpoint += amount;
    cout << this->_Name <<" berepaired\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->_Hpoint > 0 || this->_Epoint > 0){
    this->_Attack_Dmg = amount;
    cout << this->_Name <<" take damage" << ln;
    }
}

ClapTrap::~ClapTrap(){
    cout << "Destructor called\n";
}
