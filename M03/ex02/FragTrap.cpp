#include "FragTrap.hpp"

FragTrap::FragTrap(void){
    _Name = "Uknown";
    _Hpoint = 100;
    _Epoint = 100;
    _Attack_Dmg = 30;
    cout << "FragTrap " << "Unknown" << " was created !!" << ln;
}

FragTrap::FragTrap(string name){
    _Name = name;
    _Hpoint = 100;
    _Epoint = 100;
    _Attack_Dmg = 30;
    cout << "FragTrap " << _Name << " was created !!" << ln;
}

void FragTrap::highFivesGuys(void){
    cout << "Hight Five Guys\n";
}

FragTrap::~FragTrap(){
    cout << "FragTrap Destructor called\n";
}