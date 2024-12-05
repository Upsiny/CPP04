# include "WrongCat.hpp"

//Constructors
WrongCat::WrongCat( void ): WrongAnimal() {
    this->setType("WrongCat");
    return ;
}

WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
    return ;
}

//Destructor
WrongCat::~WrongCat( void ) {
    return ;
}

//operator
WrongCat&     WrongCat::operator=(const WrongCat &src) {
    this->_type = src.getType();
    return *this;
}

//functions
void    WrongCat::makeSound( void ) const {
    std::cout << "Rrrrrrrrr" << std::endl;
    return ;
}
