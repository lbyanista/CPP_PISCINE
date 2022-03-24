#include "Animal.hpp"

Animal::Animal(){
    cout << "Default Constructor Animal Called\n";
    type = "";
}

Animal::Animal(string type){
    cout << "Constructor Animal string Called\n";
    this->type = type;
}

Animal::~Animal(){
    cout << "Destructor Animal Called\n";
}

string getType(){
    return this->type;
}