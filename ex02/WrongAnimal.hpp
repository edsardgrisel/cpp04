#include <string>

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	~WrongAnimal();

	std::string	getType() const;
	
	void makeSound() const;

private:

protected:
	std::string type;

};

#endif // WRONG_ANIMAL_HPP