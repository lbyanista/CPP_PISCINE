#include "ClapTrap.hpp"

int main(void){
    ClapTrap ClapObj("hamada");
    ClapObj.takeDamage(20);
    ClapObj.attack("Sidi");
    ClapObj.beRepaired(5);
    return 0;
}