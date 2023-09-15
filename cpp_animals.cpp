#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal* dog = new Dog("Spot", 3);
	Animal* cat = new Cat("Pappy", 5);

	dog->makeSound();
	std::cout << 
	"Name : " << dog->getName() << 
	", Age: " << dog->getAge() << std::endl;

	cat->makeSound();
	std::cout <<
		"Name : " << cat->getName() <<
		", Age: " << cat->getAge() << std::endl;

	delete dog;
	delete cat;
} 