#pragma once
#include "Animal.h"

class Croc :virtual public Animal
{
	MyString aggression;
	bool ValidAggression(const MyString& aggression);
public:
	Croc(bool male_input, const int count_of_legs_input, const int live_months_input, const MyString& aggression);
	Croc(const Croc& croc);

	virtual ~Croc() = default;

	virtual bool IsItMale() const override;

	virtual MyString getTypeOfAnimal() const override;
	virtual const bool accepts(const Animal & animal) const override;
	virtual void print() const;

};