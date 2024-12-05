# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* l = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;

    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    k->makeSound();
    l->makeSound();

    delete meta;
    delete i;
    delete j;
    delete k;
    delete l;
    
    return 0;
}
