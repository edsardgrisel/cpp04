#include "Brain.hpp"
#include <iostream>


Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain& other)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;

}

void	Brain::addIdea(int index, std::string idea)
{
	if (index < 0 || index >= this->ideasLen)
	{
		std::cout << "Invalid ideas index. Select an index between 0-99" << std::endl;
	}
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	if (index < 0 || index >= this->ideasLen)
	{
		std::cout << "Invalid ideas index. Select an index between 0-99" << std::endl;
	}
	return this->ideas[index];
}