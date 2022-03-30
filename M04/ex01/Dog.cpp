#include "Dog.hpp"

Dog::Dog(){
    cout << "Constructor Dog Called\n";
    this->type = "Dog";
}

Dog::Dog(string type){
    cout << "Copy Constructor Dog Called\n";
    this->type = type;
}

Dog & Dog::operator=(const Dog &dog){
    cout << "Copy Assigment Operator Dog Called\n";
    this->type = dog.type;
    return *this;
}

Dog::~Dog(){
    cout << "Destructor Dog Called\n";
}

void Dog::makeSound()const{
    cout << "Hooooooo ...\n";
}
