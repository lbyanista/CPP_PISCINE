#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Cat.hpp"

class WrongAnimal
{
protected:
	string type;
public:
	WrongAnimal();
	WrongAnimal(string type);
	WrongAnimal(WrongAnimal const &wa);
	WrongAnimal & operator=(const WrongAnimal &);
	virtual ~WrongAnimal();
	virtual void makeSound(void)const;
};

#endif