#pragma once
#include "Animal.h"

class Swan :virtual public Animal
{
	double neck_length;
public:
	Swan(bool male_input, const int count_of_legs_input, const int live_months_input, double neck_length_input);
	Swan(const Swan& swan);

	virtual ~Swan() = default;

	virtual bool IsItMale() const override;

	virtual MyString getTypeOfAnimal() const override;
	virtual const bool accepts(const Animal & animal) const override;
	virtual void print() const;

	
};