#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#define ln std::endl
#define cout std::cout
#define string std::string

class Animal
{
    protected:
        string type;

    public:

    Animal();
    Animal(string type);
    ~Animal();
    Animal& operator=(const Animal &animal);
    virtual void makeSound() const;
    string getType(void) const;

};

#endif