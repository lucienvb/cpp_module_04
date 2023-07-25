#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// INCLUDES
#include <iostream>
#include <Brain.hpp>

// DEFINES
#define MESSAGE 1

// I have to get rid of the getBrain pure function!
// I should be able to explain what happens with and without the destructor on virtual!
class Animal {
public:
	Animal();
	Animal(const Animal& other);

	Animal&	operator=(const Animal& other);

	virtual std::string getType(void) const;
	virtual void		makeSound(void) const;
//	virtual Brain*		getBrain(void) const = 0;

	virtual ~Animal();

protected:
	std::string	_type;
};

#endif
