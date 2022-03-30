#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    cout << "Default Constructor Wrong Animal class\n";
    type = "";
}

WrongAnimal::WrongAnimal(string type){
    cout << "Copy Constructor Wrong Animal class\n";
    this->type = type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &wra){
    cout << "Copy Assigment operator Wrong Animal class\n";
    this->type = wra.type;
    return (*this);
}

void WrongAnimal::makeSound(void)const{
    cout << "Sound Wrong Animal\n";
}

WrongAnimal::~WrongAnimal(){
    cout << "Destructor Wrong Animal class\n";
}
