#include "WrongAnimal.hpp"

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();

	void makeSound() const;

private:

};

#endif // WRONG_CAT_HPP