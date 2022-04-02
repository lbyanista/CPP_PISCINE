#include "Dog.hpp"

Dog::Dog(){
    cout << "Constructor Dog Called\n";
    this->type = "Dog";
    this->ptr = new Brain();
}

Dog::Dog(string type){
    cout << "Constructor Param Dog Called\n";
    this->type = type;
    this->ptr = new Brain();
}

Dog::Dog(Dog const &dg){
    cout << "Copy constructor called \n";
    this->ptr = new Brain();
    *this = dg;
}

Dog & Dog::operator=(const Dog &){
    cout << "Copy Assigment Operator Dog Called\n";
    return *this;
}

Dog::~Dog(){
    cout << "Destructor Dog Called\n";
    delete ptr;
}

void Dog::makeSound()const{
    cout << "Hooooooo ...\n";
}

Brain *Dog::GetBrain(void)const{
    return this->ptr;
}