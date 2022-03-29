#include "WrongCat.hpp"

WrongCat::WrongCat(){
    cout << "Constructor Wrong Cat class\n";
}

WrongCat::~WrongCat(){
    cout << "Desstructor Wrong Cat class\n";
}

void WrongCat::makeSound(void)const{
    cout << "Wrong Cat sound\n";
}