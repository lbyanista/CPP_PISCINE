#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "WrongAnimal.hpp"

class Brain
{
private:
    string ideas[100];
public:
    Brain();
    Brain(string ideas);
    Brain & operator=(const Brain &br);
    ~Brain();
};

#endif