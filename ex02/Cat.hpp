#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();

	void makeSound() const override;
	Brain*	getBrain();

private:
	Brain *brain;
};

#endif // CAT_HPP