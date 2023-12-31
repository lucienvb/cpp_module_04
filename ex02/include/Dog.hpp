#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class	Dog : public Animal {
public:
	Dog();
	Dog(const Dog& other);

	virtual Dog&	operator=(const Dog& other);
	virtual void	makeSound(void) const;
	virtual Brain*	getBrain(void) const;

	~Dog();

private:
	Brain	*_brain;
};

#endif
