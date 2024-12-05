# include "Cat.hpp"

//Constructors
Cat::Cat( void ): Animal() {
    this->setType("Cat");
    return ;
}

Cat::Cat(const Cat &src) {
    *this = src;
    return ;
}

//Destructor
Cat::~Cat( void ) {
    return ;
}

//operator
Cat&     Cat::operator=(const Cat &src) {
    this->_type = src.getType();
    return *this;
}

//functions
void    Cat::makeSound( void ) const {
    std::cout << "Miaou !" << std::endl;
    return ;
}
