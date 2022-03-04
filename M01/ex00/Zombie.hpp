#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string

class Zombie
{
private:
    /* data */
    string name;
public:
    void announce(void);
    Zombie(/* args */);
    ~Zombie();
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}


#endif // !ZOMBIE_HPP