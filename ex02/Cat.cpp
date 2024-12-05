# include "Cat.hpp"

//Constructors
Cat::Cat( void ): Animal() {
    _brain = new Brain();
    this->setType("Cat");
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Copy-Cat created" << std::endl;
    return ;
}

//Destructor
Cat::~Cat( void ) {
    delete _brain;
    std::cout << "Cat as been ranover by a big SUV" << std::endl;
    return ;
}

//operator
Cat&     Cat::operator=(const Cat &src) {
    this->_type = src.getType();
    return *this;
}

//setter
void Cat::setIdeas( int i, std::string idea) {
    if (i >= 100)
        return ;
    _brain->setIdeas(i, idea);
}

//getter
std::string Cat::getIdea(int i) const {
    if (i >= 100)
        return "";
    return _brain->getIdea(i);
}

//functions
void    Cat::makeSound( void ) const {
    std::cout << "Miaou !" << std::endl;
    return ;
}
