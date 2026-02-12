#include <string>

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();

	std::string	getType() const;
	
	virtual void makeSound() const = 0;

private:
protected:
	std::string type;

};

#endif // AANIMAL_HPP