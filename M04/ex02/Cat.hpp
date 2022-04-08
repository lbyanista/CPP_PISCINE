#ifndef CAT_HPP
#define CAT_HPP

#include "Dog.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *ptr;
public:
    Cat();
    Cat(string type);
    Cat(Cat const &ct);
    Cat & operator=(const Cat &ct);
    ~Cat();
    void makeSound(void)const;
    Brain *GetBrain(void)const;
};

#endif