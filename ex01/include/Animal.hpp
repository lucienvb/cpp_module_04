#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// INCLUDES
#include <iostream>
#include <Brain.hpp>

// DEFINES
#define MESSAGE 1

// The virtual destructor allows objects of derived classes to be properly
// destructed when deleted through a pointer to the base class.
class Animal {
public:
	Animal();
	Animal(const Animal& other);

	Animal&	operator=(const Animal& other);

	std::string getType(void) const;
	virtual void		makeSound(void) const;

	virtual ~Animal();

protected:
	std::string	_type;
};

#endif
