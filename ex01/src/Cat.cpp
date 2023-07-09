#include <Cat.hpp>

Cat::Cat() {
	if (MESSAGE)
		std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
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
	this->_type = other._type;
	return (*this);
}

Cat::~Cat() {
	if (MESSAGE)
		std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "meow meow" << std::endl;
}
