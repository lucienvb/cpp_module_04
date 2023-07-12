#include <Dog.hpp>

Dog::Dog() {
	if (MESSAGE)
		std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
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
	this->_type = other.getType();
	this->_brain = other.getBrain();
	return (*this);
}

Dog::~Dog() {
	if (MESSAGE)
		std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "woof woof" << std::endl;
}

Brain*	Dog::getBrain(void) const {
	return (_brain);
}
