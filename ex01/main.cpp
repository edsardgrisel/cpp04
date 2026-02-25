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
		dogBrain->addIdea(0, "idea A");

		Dog* dogCopy = new Dog(*dog);
		dogBrain->addIdea(1, "idea B");
		dogCopy->getBrain()->addIdea(1, "idea C");

		std::cout << "dog original idea at index 0 "<<  dog->getBrain()->getIdea(0) << std::endl;
		std::cout << "dog original idea at index 1 "<<  dog->getBrain()->getIdea(1) << std::endl;


		std::cout << "dog copy idea at index 0 "<<  dogCopy->getBrain()->getIdea(0) << std::endl;
		std::cout << "dog copy idea at index 1 "<<  dogCopy->getBrain()->getIdea(1) << std::endl;

		delete dog;
		delete dogCopy;
	}
	{
		std::cout << "Test two brains created and deconstucted " << std::endl;
		Dog basic;
		{
			Dog tmp = basic;
		}
	}
	return 0;
}