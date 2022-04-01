#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
public:
    string ideas[100];
    Brain();
    Brain(string ideas);
    Brain(Brain const &bro);
    Brain & operator=(const Brain &);
    ~Brain();
    // void SetIdeas(string str);
    // string GetIdeas(void);
};

#endif