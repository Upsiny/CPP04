# include "Animal.hpp"

//Constructors
Animal::Animal( void ): _type("") {
    return ;
}

Animal::Animal(const Animal &src) {
    *this = src;
    return ;
}

//Destructor
Animal::~Animal( void ) {
    return ;
}

//operator
Animal&     Animal::operator=(const Animal &src) {
    this->_type = src.getType();
    return *this;
}

//setter
void        Animal::setType(std::string type) {
    this->_type = type;
    return ;
}

//getter
std::string Animal::getType( void ) const {
    return this->_type;
}

//functions
void        Animal::makeSound( void ) const {
    std::cout << "No sound..." << std::endl;
    return ;
}
