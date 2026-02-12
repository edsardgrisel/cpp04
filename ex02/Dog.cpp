#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog desctructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain*	Dog::getBrain()
{
	return this->brain;
}