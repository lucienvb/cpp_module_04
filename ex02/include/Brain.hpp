#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define NUMBER_OF_IDEAS 100

class	Brain {
public:
	Brain();
	Brain(const Brain& other);

	Brain&	operator=(const Brain& other);

	std::string	_ideas[NUMBER_OF_IDEAS];

	~Brain();
};

#endif
