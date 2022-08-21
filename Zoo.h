#pragma once
#include <vector>
#include "MyString.h"
#include "Animal.h"
#include "Bear.h"
#include "Croc.h"
#include "Swan.h"

class Zoo
{
	MyString manager;
	int counter_of_workers;
	std::size_t counter_of_animals;
	std::vector<const Animal*> kletki;
public:
	Zoo() = default;
	Zoo(const MyString& manager_input, const int counter_workers, const std::size_t counter_animals, std::vector<const Animal*>& kletki);
	Zoo(const Zoo& zoo);
	~Zoo() = default;

	bool addAnimal(const Animal& animal);
	void print();


	
};