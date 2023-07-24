#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	// normal animal classes:
	{
		Animal animal;
		Cat cat;
		Cat other_cat(cat);
		Dog dog;
		Animal* test = &cat;

		animal.makeSound();
		cat.makeSound();
		other_cat.makeSound();
		dog.makeSound();
		(*test).makeSound();
	}
	std::cout << "\n";
	// wrong animal classes:
	{
		WrongAnimal wrong_animal;
		WrongCat wrong_cat;
		WrongAnimal* test = &wrong_cat;

		wrong_animal.makeSound();
		wrong_cat.makeSound();
		(*test).makeSound();
	}
//	system("leaks poly");
	return 0;
}