#include <Animal.hpp>

Animal::Animal() {
	if (MESSAGE)
		std::cout << "Animal default constructor called" << std::endl;
	_type = "";
}

Animal::Animal(const Animal& other) {
	if (MESSAGE)
		std::cout << "Animal copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Animal&	Animal::operator=(const Animal& other) {
	if (MESSAGE)
		std::cout << "Animal assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

Animal::~Animal() {
	if (MESSAGE)
		std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::makeSound(void) const {
	std::cout << "A combination of all animal sounds combined?!" << std::endl;
}
