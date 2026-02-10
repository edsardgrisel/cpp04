#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

	void		addIdea(int index, std::string idea);
	std::string	getIdea(int index);


private:
	static const int	ideasLen = 100;
	std::string			ideas[ideasLen];
};

#endif // BRAIN_HPP