#include "Zombie.hpp"

//Conts&&Destrac

Zombie::Zombie(string name){ this->name = name; }

Zombie::~Zombie(void) { cout << this->name << " is dead !!!" << ln; }

//G&S

string Zombie::Get_name(void) { return (this->name); }

void Zombie::Set_name(string name) { this->name = name; }

void Zombie::announce(void){ cout << this->name << " BraiiiiiiinnnzzzZ..." << ln; }