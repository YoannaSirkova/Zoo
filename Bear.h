#pragma once
#include "Animal.h"

class Bear :virtual public Animal
{
	int hibernation;
public:
	Bear(bool male_input = false, const int count_of_legs_input = 0, const int live_months_input = 0, int hibernation_input=0);
	Bear(const Bear& bear);


	virtual MyString getTypeOfAnimal() const override;
	virtual bool IsItMale() const override;
	virtual ~Bear() = default;
	virtual const bool accepts(const Animal& animal) const override;

	virtual void print() const;


};