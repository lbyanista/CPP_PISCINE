#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#define cout std::cout
#define cin std::cin
#define ln std::endl
#define string std::string

class Zombie{
    private:
    std::string name;

    public:
    // Constructors and destructors
    Zombie ( void );
    Zombie ( std:: string );
    ~Zombie ( void );

    // Getters & Setters
    std::string getName( void );
    void        setName ( std::string );
    
    // Member Functions
    void announce( void );

    // Static Finctions


};


#endif