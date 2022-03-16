#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>
#define ln std::endl
#define string std::string
#define cout std::cout


class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Karen();
    ~Karen();

    void    complain(string level);
};

enum level_enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    NO_ONE 
    };

#endif