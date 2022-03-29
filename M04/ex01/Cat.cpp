#include "Cat.hpp"

Cat::Cat(){
    cout << "Constructor Cat Called\n";
    this->type = "Cat";
}

Cat::~Cat(){
    cout << "Destructor Cat Called\n";
}

void Cat::makeSound()const{
    cout << "Meowwww ...\n";
}
