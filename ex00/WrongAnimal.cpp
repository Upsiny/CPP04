# include "WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal( void ): _type("") {
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
    return ;
}

//Destructor
WrongAnimal::~WrongAnimal( void ) {
    return ;
}

//operator
WrongAnimal&     WrongAnimal::operator=(const WrongAnimal &src) {
    this->_type = src.getType();
    return *this;
}

//setter
void        WrongAnimal::setType(std::string type) {
    this->_type = type;
    return ;
}

//getter
std::string WrongAnimal::getType( void ) const {
    return this->_type;
}

//functions
void        WrongAnimal::makeSound( void ) const {
    std::cout << "Béééé !" << std::endl;
    return ;
}
