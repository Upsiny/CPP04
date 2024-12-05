# include "Dog.hpp"

//Constructors
Dog::Dog( void ): Animal() {
    this->setType("Dog");
    return ;
}

Dog::Dog(const Dog &src) {
    *this = src;
    return ;
}

//Destructor
Dog::~Dog( void ) {
    return ;
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
