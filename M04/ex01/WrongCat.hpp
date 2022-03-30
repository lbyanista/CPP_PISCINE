#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	string type;
public:
	WrongCat();
	WrongCat(string type);
	WrongCat & operator=(const WrongCat &wrc);
	~WrongCat();
	void makeSound(void)const;
};

#endif