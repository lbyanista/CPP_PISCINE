#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name );

int main(){

    // allocate zombie on heap
    Zombie *zombies = zombieHorde(10, "Mourad");
    for (int i = 0; i < 5; i++)
        zombies[i].announce();

    // Free zombies
    delete[] zombies;
}