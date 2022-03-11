#include "Zombie.hpp"

//C&D

Zombie::Zombie( void ){ }

Zombie::Zombie(string name ){
    this->name = name;
}

Zombie::~Zombie( void ){
    cout << "<" << this->name << ">" << " is dead !!!" << ln;
}

//G&S

// string Zombie::getName( void ){
//     return (this->name);
// }

void    Zombie::setName(string name){
    this->name = name;
}

//Methods

void    Zombie::announce( void ){
    cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}