#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() {
	if (MESSAGE)
		std::cout << "WrongAnimal default constructor called" << std::endl;
	_type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	if (MESSAGE)
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (MESSAGE)
		std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	if (MESSAGE)
		std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "!!Alien sounds maybe then?!" << std::endl;
}
