#include "Animal.hpp"

Animal::Animal(){
    cout << "Default Constructor Animal Called\n";
    type = "";
}

Animal::Animal(string type){
    cout << "Constructor Param Animal Called\n";
    this->type = type;
}

Animal::~Animal(){
    cout << "Destructor Animal Called\n";
}

string Animal::getType(void) const{
    return (this->type);
}

Animal::Animal(Animal const &an){
    cout << "Copy constructor Animal called\n";
    this->type = an.type;
    *this = an;
}

Animal & Animal::operator=(const Animal &animal){
    cout << "Copy Assigment operator\n";
    this->type = animal.type;
    return (*this);
}

void Animal::makeSound(void)const{
    cout << "No Animal Sound here\n";
}
