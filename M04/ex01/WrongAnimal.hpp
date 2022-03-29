#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Cat.hpp"

class WrongAnimal
{
	public:
	WrongAnimal();
	virtual ~WrongAnimal();
	virtual void makeSound(void)const;
};

#endif