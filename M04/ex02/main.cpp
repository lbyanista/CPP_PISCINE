#include "WrongCat.hpp"

int main() {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// cout << j->getType() << " " << ln;
	// cout << i->getType() << " " << ln;
	
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// const WrongAnimal* k = new WrongCat();
	// k->makeSound();
	// delete k;
	// delete j;

	Animal *Ar[10];
	
	for (int i = 0; i < 10; i++)
	{
		if(i < 5)
			Ar[i] = new Dog;
		else
			Ar[i] = new Cat;
	}
	
	for (int i = 0; i < 10; i++)
	{
		delete Ar[i];
	}

	Cat cat1, cat2;
	Brain   *brain = cat1.GetBrain();
    brain->ideas[0] = "I am the King !";
    brain->ideas[1] = "OHHHH!!";

    cout << " ------------- Get Ideas ------------ " << ln;

    cout << cat1.getType() << " 1: " << cat1.GetBrain()->ideas[0] << ln;
    cout << cat2.getType() << " 2: " << cat2.GetBrain()->ideas[0] << ln;

    cout << " ------------- Assignement animal to animal ------------ " << ln;
    cat2 = cat1;

    cout << cat1.getType() << " 1: " << cat1.GetBrain()->ideas[0] << ln;
    cout << cat2.getType() << " 2: " << cat2.GetBrain()->ideas[0] << ln;

    cout << " ------------- Delete cats ------------ " << ln;


	const Animal* p = new Dog();
	const Animal* n = new Cat();
	cout << p->getType() << ln;
	delete p;//should not create a leak delete i;
	delete n;

	
	return 0;
}