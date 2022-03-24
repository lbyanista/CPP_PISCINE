#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    string getType(void);
};

#endif