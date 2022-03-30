#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    void makeSound(void)const;
};

Animal *p = new cat(); 

#endif