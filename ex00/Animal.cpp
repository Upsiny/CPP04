# include "Animal.hpp"

//Constructors
Animal::Animal( void ): _type("") {
    return ;
}

Animal::Animal(const Animal &src) {
    *this = src;
    return *this;
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
void Animal::setType(std::string type) {
    this->_type = type;
    return ;
}

//getter
std::string Animal::getType( void ) {
    return this->_type;
}
