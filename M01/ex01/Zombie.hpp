#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string

class Zombie{
    private:
    string name;

    public:
    // C&D
    Zombie (void);
    Zombie (string);
    ~Zombie ( void );

    // G&S
    string  getName(void);
    void	setName (string);
    
    // Member Functions
    void announce( void );

    // Static Finctions
};

#endif