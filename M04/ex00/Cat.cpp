#include "Cat.hpp"

Cat::Cat(){
    cout << "Constructor Cat Called\n";
    this->type = "Cat";
}

Cat::Cat(string type){
    cout << "Constructor Param Cat Called\n";
    this->type = type;
}

Cat& Cat::operator=(Cat const &cat){
    cout << "Copy Assigment Operator Cat Called\n";
    this->type = cat.type;
    return (*this);
}

Cat::Cat(Cat const &ct){
    cout << "Copy constructor called\n";
    this->type = ct.type;
    *this = ct;
}

Cat::~Cat(){
    cout << "Destructor Cat Called\n";
}

void Cat::makeSound()const{
    cout << "Meowwww ...\n";
}
