#include "Swan.h"

Swan::Swan(bool male_input, const int count_of_legs_input, const int live_months_input, double neck_length_input):
	Animal(male_input, count_of_legs_input, live_months_input), neck_length(neck_length_input)
{
}

Swan::Swan(const Swan& swan): Animal(swan.is_it_male, swan.count_of_legs, swan.live_months), neck_length(swan.neck_length)
{
}

bool Swan::IsItMale() const
{
	return this->is_it_male;
}

MyString Swan::getTypeOfAnimal() const
{
	MyString type("swan");
	return type;
}

const bool Swan::accepts(const Animal& animal) const
{
	return true;
}

void Swan::print() const
{
	std::cout << "Type of Animal:" << this->getTypeOfAnimal() << "\n";
	std::cout << "Sex of the animal:";
	if (this->IsItMale()) std::cout << "male \n";
	else std::cout << "female \n";
	std::cout << "Count of legs: " << count_of_legs;
	std::cout << "\n How many months lives: " << live_months << "\n";
}
