#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;

	delete j;//should not create a leaks
	delete i;

	Animal	*animals[5];
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Dog	copy(*(Dog *)animals[2]);
	for (int i = 0; i < 100; ++i)
		{
			std::cout << copy.getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)animals[2])->getBrain()->getIdea(i) << std::endl;
		}

	// for (int i = 0; i < 6; i++)
    // {
    //     delete monsters[i];
    // }
	system("leaks main");
	return 0;
}