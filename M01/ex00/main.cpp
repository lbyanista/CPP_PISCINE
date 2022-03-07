#include "Zombie.hpp"

Zombie* newZombie(string);
void randomChump(string);
int main(){

    //allocate
    Zombie  zombieX("ZomieeX");
    zombieX.announce();

    randomChump("RandomChump") ;

    // allocate on heap
     Zombie *zombieY = newZombie("other");
     zombieY->announce();
     delete zombieY;
}