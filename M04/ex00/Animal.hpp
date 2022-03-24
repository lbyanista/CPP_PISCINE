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
    void makeSound();
    string getType(void);

};

#endif