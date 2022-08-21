#pragma once
#include <iostream>
#include "MyString.h"

class Animal
{
protected:

	bool is_it_male;
	int count_of_legs;
	int live_months;
public:
	Animal(bool male_input = false, const int count_of_legs_input = 0, const int live_months_input = 0);
	Animal(const Animal& animal);

	
	virtual bool IsItMale() const;
	virtual MyString getTypeOfAnimal() const;
	virtual ~Animal() = default;
	virtual const bool accepts(const Animal& animal) const;
	
	virtual void print() const;

};