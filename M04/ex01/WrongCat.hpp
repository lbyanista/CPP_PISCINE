#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(string type);
	WrongCat & operator=(const WrongCat &);
	~WrongCat();
	void makeSound(void)const;
};

#endif