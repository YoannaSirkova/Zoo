#include "Croc.h"

bool Croc::ValidAggression(const MyString& aggression)
{
	return aggression == "nisko" || aggression == "sredno" || aggression == "visoko";
}

Croc::Croc(bool male_input, const int count_of_legs_input, const int live_months_input, const MyString& aggression_input):
	Animal(male_input, count_of_legs_input, live_months_input), aggression(aggression_input)
{
	if (!ValidAggression(aggression_input))
		throw std::exception("You have to put one of the tree options: nisko, sredno, visoko");
}

Croc::Croc(const Croc& croc) :Animal(croc.is_it_male, croc.count_of_legs, croc.live_months), aggression(croc.aggression)
{
}

bool Croc::IsItMale() const
{
	return this->is_it_male;
}

MyString Croc::getTypeOfAnimal() const
{
	MyString type("croc");
	return type;
	// TODO: insert return statement here
}

const bool Croc::accepts(const Animal& animal) const
{
	if (aggression == "visoko")
		return false;
	if (aggression == "sredno")
	{
		if (animal.getTypeOfAnimal() == "swan")
			return false;
	}
	return true;
}

void Croc::print() const
{
	std::cout << "Type of Animal:" << this->getTypeOfAnimal() << "\n";
	std::cout << "Sex of the animal:";
	if (this->IsItMale()) std::cout << "male \n";
	else std::cout << "female \n";
	std::cout << "Count of legs: " << count_of_legs;
	std::cout << "\n How many months lives: " << live_months << "\n";
}
