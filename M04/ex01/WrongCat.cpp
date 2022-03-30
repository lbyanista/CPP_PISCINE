#include "WrongCat.hpp"

WrongCat::WrongCat(){
    cout << "Constructor Wrong Cat class\n";
    type = "";
}

WrongCat::WrongCat(string type){
    cout << "Copy Constructor Wrong Cat class\n";
    this->type = type;
}

WrongCat & WrongCat::operator=(const WrongCat &wrc){
    cout << "Copy Assigment operator Wrong Cat class\n";
    this->type = wrc.type;
    return (*this);
}

WrongCat::~WrongCat(){
    cout << "Desstructor Wrong Cat class\n";
}

void WrongCat::makeSound(void)const{
    cout << "Wrong Cat sound\n";
}