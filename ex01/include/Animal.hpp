#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// INCLUDES
#include <iostream>
#include <Brain.hpp>

// DEFINES
#define MESSAGE 0

class Animal {
public:
	Animal();
	Animal(const Animal& other);

	virtual Animal&	operator=(const Animal& other);

	virtual std::string getType(void) const;
	virtual void		makeSound(void) const;
	virtual Brain*		getBrain(void) const = 0;

	virtual ~Animal();

protected:
	std::string	_type;
};

#endif
