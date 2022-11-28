#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() = 0;
	const std::string &getType() const;

protected:
	std::string type;
};
#endif /* ********************************************************** ANIMAL_H */