#include "Zoo.h"


Zoo::Zoo(const MyString& manager_input, const int counter_workers, const std::size_t counter_animals, std::vector<const Animal*>& kletki_input):
	manager(manager_input), counter_of_workers(counter_workers), counter_of_animals(counter_animals)
{
	kletki = kletki_input;
}

Zoo::Zoo(const Zoo& zoo): manager(zoo.manager),counter_of_workers(zoo.counter_of_workers),counter_of_animals(zoo.counter_of_animals),kletki(zoo.kletki)
{
}



bool Zoo::addAnimal(const Animal& animal)
{
	if (counter_of_animals == kletki.size())
		return false;
	size_t size = kletki.size();
	for (size_t i = 0; i < size; i++)
	{
		if (kletki[i] == nullptr)
		{
			if (i == 0)
			{
				if (i + 1 < size)
				{
					if (kletki[i + 1] == nullptr)
					{
						
						kletki[i] = &animal;
						counter_of_animals++;
						return true;
					}
					else
					{
						if (kletki[i + 1]->accepts(animal) && animal.accepts(kletki[i + 1]))
						{
							kletki[i] = &animal;
							counter_of_animals++;
							return true;
						}
						else return false;
					}
				}
				else
				{
					kletki[i] = &animal;
					counter_of_animals++;
					return true;
				}
			}
			else
			{

				if (i + 1 < size)
				{
				
					if(kletki[i+1]==nullptr)
					{ 
						if (kletki[i - 1]->accepts(animal) && animal.accepts(kletki[i - 1]))
						{
							kletki[i] = &animal;
							counter_of_animals++;
							return true;
						}

					}
					if (kletki[i - 1]->accepts(animal) && animal.accepts(kletki[i - 1]) && kletki[i + 1]->accepts(animal) && animal.accepts(kletki[i + 1]))
					{
						kletki[i] = &animal;
						counter_of_animals++;
						return true;
					}
					
				}
				else
				{
					if (kletki[i - 1]->accepts(animal) && animal.accepts(kletki[i - 1]))
					{			
						kletki[i] = &animal;
						counter_of_animals++;
						return true;
					}
				}

			}
		}
	}
	return false;
}

void Zoo::print()
{
	std::cout << "Manager of zoo:" << manager<<"\n";
	std::cout << "Count of workers:" << counter_of_workers << "\n";
	std::cout << "Count of animals:" << counter_of_animals << "\n";
	std::cout << "Animals:\n";
	std::size_t size = kletki.size();
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "\n";
		if (kletki[i] == nullptr)
			std::cout << "Empty \n\n";
		else
			kletki[i]->print();
	}
}
