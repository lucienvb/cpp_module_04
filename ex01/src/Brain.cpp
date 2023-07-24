#include <Brain.hpp>
#include <Animal.hpp>

Brain::Brain() {
	if (MESSAGE)
		std::cout << "Brain default constructor called" << std::endl;
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
	for (size_t i = 0; i < NUMBER_OF_IDEAS; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain() {
	if (MESSAGE)
		std::cout << "Brain destructor called" << std::endl;
}
