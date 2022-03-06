#include "Zombie.hpp"

Zombie* newZombie(string);
void randomChump(string);
int main(){

    //allocate
    Zombie  zombie1("Wii3");
    zombie1.announce();

    randomChump("wii2") ;

    // allocate on heap
     Zombie *zombieX = newZombie("other");
     zombieX->announce();
     delete zombieX;
}