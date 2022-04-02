#include "WrongCat.hpp"

WrongCat::WrongCat(){
    cout << "Constructor Wrong Cat class\n";
    type = "";
}

WrongCat::WrongCat(string type){
    cout << "Constructor WrongCat Param class\n";
    this->type = type;
}

WrongCat & WrongCat::operator=(const WrongCat &){
    cout << "Copy Assigment operator Wrong Cat class\n";
    return (*this);
}

WrongCat::WrongCat(WrongCat const &wc){
    cout << "Copy Constructor WrongCat class\n";
    this->type = wc.type;
    *this = wc;
}

WrongCat::~WrongCat(){
    cout << "Desstructor Wrong Cat class\n";
}

void WrongCat::makeSound(void)const{
    cout << "Wrong Cat sound\n";
}