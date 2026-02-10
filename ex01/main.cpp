#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{ 
	{
		//provided code
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
		// end provided code
	}
	std::cout << "\n\n" << std::endl;
	{
		Animal	*animals[6];
		for(int i = 0; i < 6; i++)
		{
			std::cout << "\nCreate animals at index: " << std::to_string(i) << std::endl;
			if(i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for(int i = 0; i < 6; i++)
		{
			std::cout << "\nDelete animals at index: " << std::to_string(i) << std::endl;
			delete animals[i];
		}
	}
	std::cout << "\n\n" << std::endl;
	{
		Dog* dog = new Dog();
		Brain* dogBrain = dog->getBrain();
		dogBrain->addIdea(0, "idea 1");

		Dog* dogCopy = new Dog(*dog);
		dogBrain->addIdea(1, "idea 2");
		Brain* dogCopyBrain = dogCopy->getBrain();

		std::cout << "idea 0 "<< dogCopyBrain->getIdea(0) << std::endl;
		std::cout << "idea 1 "<< dogCopyBrain->getIdea(1) << std::endl;


	}
	return 0;
}