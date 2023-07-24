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
	this->_type = other.getType();
	this->_brain = new Brain(*(other._brain));
}

Dog&	Dog::operator=(const Dog& other) {
	if (MESSAGE)
		std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	return (*this);
}

Dog::~Dog() {
	if (MESSAGE)
		std::cout << "Dog destructor called" << std::endl;
	if (this->_brain != nullptr)
		delete this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "woof woof" << std::endl;
}

Brain*	Dog::getBrain(void) const {
	return (_brain);
}
