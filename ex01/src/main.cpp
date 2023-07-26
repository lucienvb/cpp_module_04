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
		for (size_t i = 0; i < 6; i++) {
			if (i < 3)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "\n";
		for (size_t i = 0; i < 6; i++)
			delete animals[i];
	}
//	std::cout << "\n";
//	{
//		Dog dog;
//		{
//			Dog tmp = dog;
//		}
//	}
//	{
//		Dog dog;
//		Brain *brain = NULL;
//		brain = dog.getBrain();
//		brain->ideas[0] = "han company";
//		brain->ideas[1] = "firmaatje";
//
//		std::cout << "dog idea 0: " << dog.getBrain()->ideas[0] << std::endl;
//		std::cout << "dog idea 1: " << dog.getBrain()->ideas[1] << std::endl;
//	}
//	{
//		const Animal* j = new Dog();
//		const Animal* i = new Cat();
//		delete j;//should not create a leak
//		delete i;
//	}
//	system("leaks brain");
	return 0;
}
