#include "Brain.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << j->getType() << " " << ln;
	cout << i->getType() << " " << ln;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal* k = new WrongCat();
	k->makeSound();
	delete k;
	// const Brain* b = new Dog();
	Brain
	
	return 0;
}