#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{  
private:
    Brain *ptr;
public:
    Dog();
    Dog(string type);
    Dog(Dog const &dg);
    Dog & operator=(const Dog &);
    virtual ~Dog();
    void makeSound(void)const;
    Brain *GetBrain(void)const;
};

#endif 