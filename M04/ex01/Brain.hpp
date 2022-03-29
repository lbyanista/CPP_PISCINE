#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "WrongCat.hpp"

class Brain : public Animal
{
private:
    string ideas[100];
public:
    Brain();
    ~Brain();
};


#endif