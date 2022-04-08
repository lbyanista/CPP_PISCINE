#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Cat.hpp"

class WrongAnimal
{
protected:
	string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &wa);
	WrongAnimal(string type);
	WrongAnimal & operator=(const WrongAnimal &wra);
	virtual ~WrongAnimal();
	void makeSound(void)const;
};

#endif