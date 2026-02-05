#include <string>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	std::string	getType() const;
	
	virtual void makeSound() const;

private:

protected:
	std::string type;

};

#endif // ANIMAL_HPP