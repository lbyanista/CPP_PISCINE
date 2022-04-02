#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(string type);
    Cat(Cat const &ct);
    Cat & operator=(const Cat &cat);
    ~Cat();
    void makeSound(void)const;
};

#endif