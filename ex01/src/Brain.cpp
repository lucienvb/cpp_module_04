#include <Brain.hpp>

Brain::Brain() {
	if (MESSAGE)
		std::cout << "Brain default constructor called" << std::endl;
	_type = "";
}

Brain::Brain(const Brain& other) {
	if (MESSAGE)
		std::cout << "Brain copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Brain&	Brain::operator=(const Brain& other) {
	if (MESSAGE)
		std::cout << "Brain assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

Brain::~Brain() {
	if (MESSAGE)
		std::cout << "Brain destructor called" << std::endl;
}
