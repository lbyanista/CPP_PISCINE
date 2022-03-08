#include "Zombie.hpp"

Zombie* newZombie(string);
void randomChump(string);
int main(){

    //allocate on stack
    Zombie  zombieX("Foo");
    zombieX.announce();

    randomChump("RandomChump");

    // allocate on heap
     Zombie *zombieY = newZombie("other");
     zombieY->announce();
     delete zombieY;
}