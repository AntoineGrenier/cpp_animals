#include "Cat.h"
#include <iostream>

Cat::Cat(const std::string& name, int age) : Animal(name, age) {}

void Cat::makeSound() {
	std::cout << getName() << " the cat is meowing." << std::endl;
}