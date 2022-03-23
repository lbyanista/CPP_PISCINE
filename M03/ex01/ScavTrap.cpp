#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
    _Name = "Uknown";
    _Hpoint = 100;
    _Epoint = 50;
    _Attack_Dmg = 20;
    cout << "ScavTrap " << "Unknown" << " was created !!" << ln;
}

ScavTrap::ScavTrap(string name){
    _Name = name;
    _Hpoint = 100;
    _Epoint = 50;
    _Attack_Dmg = 20;
    cout << "ScavTrap " << _Name << " was created !!" << ln;
}

void ScavTrap::guardGate(){
    cout << this->_Name <<" ScavTrap is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const string &target){
    if(this->_Hpoint > 0 || this->_Epoint > 0){
        this->_Hpoint -= _Attack_Dmg;
        this->_Epoint--;
        cout << "ScavTrap " << this->_Name << " attack " << target << " causing " << _Attack_Dmg << " points of damage!" << ln; 
    }
}

ScavTrap::~ScavTrap(){
    cout << "ScavTrap Destructor called\n";
}