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
	this->_type = other.getType();
	this->_brain = new Brain(*(other._brain));
}

Cat&	Cat::operator=(const Cat& other) {
	if (MESSAGE)
		std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	return (*this);
}

Cat::~Cat() {
	if (MESSAGE)
		std::cout << "Cat destructor called" << std::endl;
	if (this->_brain != nullptr)
		delete this->_brain;
}

void	Cat::makeSound(void) const {
	std::cout << "woof woof" << std::endl;
}

Brain*	Cat::getBrain(void) const {
	return (this->_brain);
}
