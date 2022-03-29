#include "FragTrap.hpp"

int main(void){
    ClapTrap ClapObj("hamada");
    ClapObj.takeDamage(20);
    ClapObj.attack("Sidi");
    ClapObj.beRepaired(5);
    ScavTrap ScavObj("Ahmed");
    ScavObj.attack("Asma");
    ScavObj.guardGate();
    FragTrap FragObj("abdellah");
    FragObj.highFivesGuys();
    // ScavTrap ok("howa");
    // FragObj.attack("asma");
    // ScavTrap SObj("ahmed");
    // FragTrap FObj("hind");
    // SObj.attack("asma");
    // ClapTrap Cobj("ClapOb");
    // FObj.attack("hadak");
    return 0;
}