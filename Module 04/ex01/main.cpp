#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    // for (int i = 0; i < 10; i++)
    //     delete animals[i];

    std::cout << std::endl
              << "******************" << std::endl
              << std::endl;

    Dog h;
    {
        Dog f(h);
    }
    system("leaks Animal");
}