#include "WrongCat.hpp"

int main() {
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << j->getType() << " " << ln;
	cout << i->getType() << " " << ln;
	
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// const WrongAnimal* k = new WrongCat();
	// k->makeSound();
	delete i;
	delete j;
	
	// Animal a;

	return 0;
}