#include <iostream>
#include <vector>
#include "Zoo.h"

int main()
{
	Bear* bear = new Bear(true, 4, 340, 100);
	Swan* swan = new Swan(true, 4, 200, 100);
	Croc* croc = new Croc(true, 4, 34,"nisko");

	std::vector<const Animal*> vec;
	vec.push_back(bear);
	vec.push_back(nullptr);
	vec.push_back(nullptr);
	vec.push_back(swan);
	vec.push_back(croc);

	Zoo zoo("Ivan", 10, 3, vec);
	Zoo zoo1;
	if (!zoo1.addAnimal(*bear))
		std::cout << "You can`t add Animal because zoo1 dont have any shelters!" << std::endl;


	Swan* swan2 = new Swan(true, 2, 500, 20);
	if (zoo.addAnimal(*swan2))
		std::cout << "You added new animal!Gongrats :-)" << std::endl;

	std::cout << "\n\n\nShowing zoo:\n";
	zoo.print();


	delete bear;
	delete swan;
	delete croc;
	return 0;
}