#include "Bear.h"

Bear::Bear(bool male_input, const int count_of_legs_input, const int live_months_input, int hibernation_input):
	Animal(male_input,count_of_legs_input,live_months_input),hibernation(hibernation_input)
{
}

Bear::Bear(const Bear& bear):Animal(bear.is_it_male,bear.count_of_legs,bear.live_months),hibernation(bear.hibernation)
{

}

MyString Bear::getTypeOfAnimal() const
{
	MyString type = "bear";
	return type;
}

bool Bear::IsItMale() const
{
	return this->is_it_male;
}

const bool Bear::accepts(const Animal& animal) const
{
	if (animal.getTypeOfAnimal() == "bear" || animal.getTypeOfAnimal() == "croc")
	{
		if (this->is_it_male == true)
		{
			if (animal.IsItMale())
				return false;

		}
	}
	return true;
}

void Bear::print() const
{
	std::cout << "Type of Animal:" << this->getTypeOfAnimal() << "\n";
	std::cout << "Sex of the animal:";
	if (this->IsItMale()) std::cout << "male \n";
	else std::cout << "female \n";
	std::cout << "Count of legs: " << count_of_legs;
	std::cout << "\n How many months lives: " << live_months << "\n";
}
