#include <iostream>
#define string std::string
#define cout std::cout
#define ln std::endl

class Weapon
{
private:
    /* data */
    string type;
public:
    Weapon(string);
    ~Weapon();

    string  getType(void);
    void    setType(string);
};

// Weapon::Weapon(/* args */)
// {
// }

// Weapon::~Weapon()
// {
// }
