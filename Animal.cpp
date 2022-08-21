#include "Animal.h"

Animal::Animal(bool male_input, const int count_of_legs_input, const int live_months_input):
	is_it_male(male_input),count_of_legs(count_of_legs_input),live_months(live_months_input)
{
}

Animal::Animal(const Animal& animal):
	is_it_male(animal.is_it_male),count_of_legs(animal.count_of_legs),live_months(animal.live_months)
{

}


bool Animal::IsItMale() const
{
	return this->is_it_male;
}

MyString Animal::getTypeOfAnimal() const
{
	MyString typeofanimal("Basic Animal");
	return typeofanimal;
}

const bool Animal::accepts(const Animal& animal) const
{
	return true;
}

void Animal::print() const
{
	std::cout << "Type of Animal:" <<this->getTypeOfAnimal()<<"\n";
	std::cout << "Sex of the animal:";
	if (this->IsItMale()) std::cout<< "male \n";
	else std::cout << "female \n";
	std::cout << "Count of legs: " <<count_of_legs;
	std::cout << "\n How many months lives: " <<live_months<<"\n";
	
	// TODO: insert return statement here
}
