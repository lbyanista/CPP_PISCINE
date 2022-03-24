#include "Dog.hpp"

Dog::Dog(){
    cout << "Constructor Dog Called\n";
    this->type = "Dog";
}

Dog::~Dog(){
    cout << "Destructor Dog Called\n";
}
