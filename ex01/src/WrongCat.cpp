#include <WrongCat.hpp>

WrongCat::WrongCat() {
	if (MESSAGE)
		std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) {
	if (MESSAGE)
		std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (MESSAGE)
		std::cout << "WrongCat assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat() {
	if (MESSAGE)
		std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "!!woof?!" << std::endl;
}
