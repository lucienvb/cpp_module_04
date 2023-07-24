#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

// INCLUDES
#include <iostream>

// DEFINES
#define MESSAGE 1

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);

	WrongAnimal&	operator=(const WrongAnimal& other);

	std::string getType(void) const;
	void	makeSound(void) const;

	~WrongAnimal();

protected:
	std::string	_type;
};

#endif
