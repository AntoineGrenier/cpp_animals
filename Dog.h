#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(const std::string& name, int age);
	void makeSound() override;
};

#endif // DOG_H