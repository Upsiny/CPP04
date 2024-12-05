# include "Brain.hpp"

//Constructors
Brain::Brain( void ) {
    std::cout << "Brain created" << std::endl;
    return ;
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copy created" << std::endl;
    *this = src;
    return ;
}

//Destructor
Brain::~Brain( void ) {
    std::cout << "Brain Destroyed" << std::endl;
    return ;
}

//operator
Brain&     Brain::operator=(const Brain &src) {
    for (size_t i = 0; i < 100; i++) {
        this->_ideas[i] = src._ideas[i];
    }
    return *this;
}

//setter
void Brain::setIdeas( int i, std::string idea) {
    if (i >= 100)
        return ;
    _ideas[i] = idea;
    return ;
}

//getter
std::string Brain::getIdea(int i) const {
    if (i >= 100)
        return "";
    return _ideas[i];
}
