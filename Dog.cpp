#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& name, int age) : Animal(name, age) {}

void Dog::makeSound() {
	std::cout << getName() << " the dog is barking." << std::endl;
}