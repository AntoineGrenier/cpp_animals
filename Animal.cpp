#include "Animal.h"

Animal::Animal(const std::string& name, int age) :
	name(name), age(age) {}

std::string Animal::getName() const {
	return name;
}

void Animal::setName(const std::string& name) {
	this->name = name;
}

int Animal::getAge() const {
	return age;
}

void Animal::setAge(int age) {
	this->age = age;
}