# Zoo
To implement class Zoo representing a zoo. A zoo should hold information about a manager's name (an arbitrary length string), number of employees, number of animals, and number of cages in which they can be kept. Cells can contain at most one animal. Each zoo can be duplicated elsewhere, retaining all the characteristics of the original. A duplicate zoo should have the same types of animals in the same cages, but different individuals. 
For the Zoo implementation, the use of STL collections is allowed, except for std::string. The correct one memory management, including allocating, personalizing, preventing sharing and leaking memory is all yours responsibility.
A) Each animal is characterized by gender (male or female), number of limbs, average life expectancy (in months). Each zoo supports at least the following types of animals: Bear, Swan and Croc, but must be able to support the addition of other types of animals. Individual species of animals can support additional features: 
  bears are characterized by the duration of winter sleep (hibernation, days); 
  swans are characterized by neck length (pec_length, a centimeters); 
  crocodiles are characterized by a level of aggression (aggression), which is reflected in a scale with three main states: low, medium and high.
B) Not every two animals can live in adjacent cells. Employees take care when adding the news to accommodated in such votno to accept it and the new animal to sit in order to avoid conflicts. For this purpose, each animal has a predicate accepts, which I receive as an argument another animal and checks that the animal for which the surrender is called accepts the following rules by force 
  Swans accept with others;
  Bear accept all other animals, a male bear cannot mate with male bear and malecrocodiles; 
  Highly aggressive crocodiles cannot mate with anyone, and medium aggressive crocodiles cannot live with swan.
 C) to implement the following operations for the zoo 
  1. Add an animal to the zoo (addAnimal). Adding an animal is possible only if there is an empty cell the zoo so that the new animal accepts its neighbors and they accept it too. If so and a cell does not have the function to return a lie, the submitted animal is recorded in the cell, not its clone!
  2. Moving an animal to another cage (noveAnimal) because it does not feel good in its current cage. Moving is subject to the same restrictions as adding a new animal. If there is no suitable cell, function to return false. 
  3. Remove a zoo animal from a given cell (removeAnimal). The cell with the given animal is liberates. If the cell is already empty, display an appropriate message
D)Implement a program that demonstrates the work of the zoo
