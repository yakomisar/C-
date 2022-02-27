#include "Brain.hpp"

Brain::Brain()
{
	std::string	ideas_list[] = {
		"fly",
		"swim",
		"dream",
		"drink",
		"run",
		"walk",
		"work",
		"sleep",
		"ping",
		"relax"
	};

	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas_list[rand() % 9];
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
		if (this != &other) 
		{
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			for (int i = 0; i < 100; i++)
			{
				this->ideas[i] = other.ideas[i];
			}
		}
		else 
		{
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
}

std::string	Brain::getIdea(int index)
{
	return (this->ideas[index]);
}

Brain::~Brain()
{
}