#include "Animal.hpp"

Animal::Animal(){
    cout << "Default Constructor Animal Called\n";
    type = "";
}

Animal::Animal(string type){
    cout << "Constructor Animal Param Called\n";
    this->type = type;
}

Animal::~Animal(){
    cout << "Destructor Animal Called\n";
}

string Animal::getType(void) const{
    return (this->type);
}

Animal & Animal::operator=(const Animal &an){
    cout << "Copy Assigment operator\n";
    this->type = an.type;
    return (*this);
}

Animal::Animal(Animal const &an){
    cout << "Copy constructor Animal called \n";
    this->type = an.type;
    *this = an;
}

void Animal::makeSound(void)const{
    cout << "No Animal Sound here\n";
}
