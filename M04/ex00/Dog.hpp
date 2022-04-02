#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(string type);
    Dog(Dog const &dg);
    Dog & operator=(const Dog &dog);
    ~Dog();
    void makeSound(void)const;
};

#endif 