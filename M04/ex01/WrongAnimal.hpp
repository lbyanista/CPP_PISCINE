#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Cat.hpp"

class WrongAnimal
{
private:
	string type;
public:
	WrongAnimal();
	WrongAnimal(string type);
	WrongAnimal & operator=(const WrongAnimal &wra);
	virtual ~WrongAnimal();
	virtual void makeSound(void)const;
};

#endif