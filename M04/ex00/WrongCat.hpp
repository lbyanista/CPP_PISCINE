#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(string type);
	WrongCat(WrongCat const &wc);
	WrongCat & operator=(const WrongCat &wrc);
	~WrongCat();
	void makeSound(void)const;
};

#endif