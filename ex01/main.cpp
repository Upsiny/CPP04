#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int    main() {

    Animal*    spaRefuge[4];

    for (int i = 0 ; i < 4 ; i ++) {
        if (i % 2 == 0)
            spaRefuge[i] = new Cat;
        else
            spaRefuge[i] = new Dog;
    }

    spaRefuge[0]->setIdeas(0, "Rule The world");
    spaRefuge[0]->setIdeas(1, "Catch the red dot");
    spaRefuge[0]->setIdeas(2, "Sleeping time !");
    spaRefuge[1]->setIdeas(0, "Where is my master?");
    spaRefuge[1]->setIdeas(1, "Listen to my master");
    spaRefuge[1]->setIdeas(3, "Run over my tail");

    *spaRefuge[2] = *spaRefuge[0];
    *spaRefuge[3] = *spaRefuge[1];

    spaRefuge[2]->setIdeas(0, "play with a randow piece of string");
    spaRefuge[2]->setIdeas(1, "cuddle with human and get my nose scratched");
    spaRefuge[2]->setIdeas(2, "find a box to sleep in all day");
    spaRefuge[3]->setIdeas(0, "Where is the toilet paper?");
    spaRefuge[3]->setIdeas(1, "Is there any food to steal??");
    spaRefuge[3]->setIdeas(2, "Next time, i won't listen");

    for (int i = 0 ; i < 4 ; i ++) {
        std::cout << spaRefuge[i]->getType() << " num " << i
            << " is thinking about :" << std::endl;
        std::cout << "\t" << spaRefuge[i]->getIdea(0) << ";" << std::endl;
        std::cout << "\t" << spaRefuge[i]->getIdea(1) << ";" << std::endl;
        std::cout << "\t" << spaRefuge[i]->getIdea(2) << ";" << std::endl;
        std::cout << "\t" << spaRefuge[i]->getIdea(3) << ";" << std::endl;
    }

    for (int i = 0 ; i < 4 ; i ++)
        delete spaRefuge[i];
}
