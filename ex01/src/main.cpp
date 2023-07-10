#include <Cat.hpp>
#include <Dog.hpp>
#include <Brain.hpp>

int main()
{
	Animal	*animals[6];
	Brain*	brain = NULL;

	for (size_t i = 0; i < 6; i++) {
		if (i < 3)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	brain = animals[0]->getBrain();
	brain->ideas[0] = "han company";
	brain->ideas[1] = "firmaatje";

	std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[0]->getBrain()->ideas[1] << std::endl;

	*(animals[2]) = *(animals[0]);

	std::cout << "Aa: " << animals[2]->getBrain()->ideas[0] << std::endl;

	for (int i = 0; i < 6; i++)
		delete animals[i];

	return 0;
}
