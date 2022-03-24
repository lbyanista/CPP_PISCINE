#include "Cat.hpp"

Cat::Cat(){
    cout << "Constructor Cat Called\n";
    this->type = "Cat";
}

Cat::~Cat(){
    cout << "Destructor Cat Called\n";
}

string Cat::getType(){
    return (type);
}
