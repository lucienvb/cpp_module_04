#include <Cat.hpp>

Cat::Cat() {
	if (MESSAGE)
		std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other) {
	if (MESSAGE)
		std::cout << "Cat copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Cat&	Cat::operator=(const Cat& other) {
	if (MESSAGE)
		std::cout << "Cat assignment operator called" << std::endl;
	this->_type = other.getType();
	(this->_brain) = (other.getBrain());
	return (*this);
}

Cat::~Cat() {
	if (MESSAGE)
		std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const {
	std::cout << "woof woof" << std::endl;
}

Brain*	Cat::getBrain(void) const {
	return (_brain);
}
