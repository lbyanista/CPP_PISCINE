#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
    cout << "Constructor Cat Called\n";
    this->type = "Cat";
    this->ptr = new Brain();
}

Cat::Cat(string type){
    cout << "Copy Constructor Cat Called\n";
    this->type = type;
    this->ptr = new Brain();
}

Cat& Cat::operator=(Cat const &ct){

    cout << "Copy Assigment Operator Cat Called\n";
    this->type = ct.type;
    this->ptr->ideas->clear();
    for (size_t i = 0; i < ct.ptr->ideas->length(); i++)
    {
        this->ptr->ideas[i] = ct.ptr->ideas[i];
    }
    
    return (*this);
}

Cat::Cat(Cat const &ct){
    this->ptr = new Brain();
    *this = ct;
}

Cat::~Cat(){
    cout << "Destructor Cat Called\n";
    delete ptr;
}

void Cat::makeSound()const{
    cout << "Meowwww ...\n";
}


Brain *Cat::GetBrain(void)const{
    return (this->ptr);
}