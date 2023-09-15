#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
private:
	std::string name;

protected:
	int age;

public:
	Animal(const std::string& name, int age);
	virtual void makeSound() = 0;
	std::string getName() const;
	void setName(const std::string& name);
	int getAge() const;
	void setAge(int age);
};

#endif // ANIMAL_H