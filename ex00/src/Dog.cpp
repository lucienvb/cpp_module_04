#include <Dog.hpp>

Dog::Dog() {
	if (MESSAGE)
		std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& other) {
	if (MESSAGE)
		std::cout << "Dog copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Dog&	Dog::operator=(const Dog& other) {
	if (MESSAGE)
		std::cout << "Dog assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

Dog::~Dog() {
	if (MESSAGE)
		std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "woof woof" << std::endl;
}
