#include <Cat.hpp>
#include <Dog.hpp>
#include <Brain.hpp>

int main()
{
//	{
//		Animal	test;
//	}
	{
		Animal *animals[6];
		Brain *brain = NULL;

		for (size_t i = 0; i < 6; i++) {
			if (i < 3)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		brain = animals[0]->getBrain();
		brain->_ideas[0] = "han company";
		brain->_ideas[1] = "firmaatje";

		std::cout << "animal 0: " << animals[0]->getBrain()->_ideas[0] << std::endl;
		std::cout << "animal 0: " << animals[0]->getBrain()->_ideas[1] << std::endl;

		for (size_t i = 0; i < 6; i++)
			delete animals[i];
	}
//	system("leaks abstract");
	return 0;
}
