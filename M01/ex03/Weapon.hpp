#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#define cout std::cout
#define ln std::endl
#define string std::string

class Weapon
{
private:
    string type;
public:
    //C&D
    Weapon();
    Weapon(string);
    ~Weapon();
    //G&S
    string  getType(void) const;
    void    setType(string);
};

#endif