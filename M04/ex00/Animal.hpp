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
        string sound;

    public:

    Animal();
    Animal(string type);
    ~Animal();
    virtual void makeSound() const;
    string getType(void) const;

};

#endif