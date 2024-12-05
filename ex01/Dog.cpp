# include "Dog.hpp"

//Constructors
Dog::Dog( void ): Animal() {
    _brain = new Brain();
    this->setType("Dog");
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "Dog copy created" << std::endl;
    return ;
}

//Destructor
Dog::~Dog( void ) {
    delete _brain;
    std::cout << "Dog is dead :'(" << std::endl;
    return ;
}

//setter
void Dog::setIdeas( int i, std::string idea) {
    if (i >= 100)
        return ;
    _brain->setIdeas(i, idea);
    return ;
}

//getter
std::string Dog::getIdea(int i) const {
    if (i >= 100)
        return "";
    return _brain->getIdea(i);
}

//operator
Dog&     Dog::operator=(const Dog &src) {
    this->_type = src.getType();
    return *this;
}

//functions
void    Dog::makeSound( void ) const {
    std::cout << "Wouf !" << std::endl;
    return ;
}
