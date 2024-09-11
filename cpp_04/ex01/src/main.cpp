#include "../header/Animal.hpp"
#include "../header/Dog.hpp"
#include "../header/Cat.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"

int main()
{
    
    std::cout << GREEN << "---- manual constructors ---- \n" RESET;
    Animal *zoo[10];
    
    for (int i = 0; i < 5; i++)
            zoo [i] = new Dog();
        
    for (int i = 5; i < 10; i++)
            zoo [i] = new Cat();        

    std::cout << RED << "\n---- manual destructors ----\n" RESET;
    for (int i = 0; i < 10; i++)
        delete zoo[i];

    /*std::cout << "\n---- subject ----" << std::endl;
    const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

    Cat Jeff;
	Dog Bob;

	Cat Jeff_assigned;
	Dog Bob_assigned;

	Jeff_assigned = Jeff;
	Bob_assigned = Bob;

	Cat Jeff_copy_construct(Jeff);
	Dog Bob_copy_construct(Bob);

	std::cout << YELLOW << "\n---- shallow and deep copys ----\n" RESET;

	std::cout << YELLOW << "Jeff's original address: " RESET;
	Jeff.brainAddress();
	std::cout << YELLOW << "Bob's original address: " RESET;
	Bob.brainAddress();

	std::cout << "\n";
	std::cout << "Shallow:\n";
	std::cout << YELLOW << "Jeff's copied address: \n" << RESET;
	Jeff_assigned.brainAddress();
	std::cout << YELLOW << "Bob's copied address: \n" << RESET;
	Bob_assigned.brainAddress();

	std::cout << "\n";
	std::cout << "Deep:\n";
	std::cout << YELLOW << "Jeff's copy constructed address: " RESET;
	Jeff_copy_construct.brainAddress();
	std::cout << YELLOW << "Bob's copy constructed address: " RESET;
	Bob_copy_construct.brainAddress();

	std::cout << "\n";
	std::cout << RED << "---- destructor ---- \n" << RESET;
	*/

return 0;
}
