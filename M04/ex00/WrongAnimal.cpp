#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    cout << "Constructor Wrong Animal class\n";
}

WrongAnimal::~WrongAnimal(){
    cout << "Destructor Wrong Animal class\n";
}

void WrongAnimal::makeSound(void)const{
    cout << "Sound Wrong Animal\n";
}