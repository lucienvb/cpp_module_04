#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// INCLUDES
#include <iostream>
#include <Brain.hpp>

// DEFINES
#define MESSAGE 1

class Animal {
public:
	std::string getType(void) const;
	virtual void		makeSound(void) const = 0;
	virtual Brain*		getBrain(void) const = 0;

	virtual ~Animal();

protected:
    Animal();
    Animal(const Animal& other);
    Animal&	operator=(const Animal& other);
    std::string	_type;
};

#endif
