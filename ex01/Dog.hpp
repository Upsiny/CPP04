#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
private:
    Brain*  _brain;

public:
    Dog( void );
    Dog( const Dog &src );
    ~Dog( void );

    //get & set
    void        setIdeas( int i, std::string idea );
    std::string getIdea(int i) const;
    
    //functions
    void        makeSound( void ) const;

    //operator
    Dog&          operator=(const Dog &src);
};

#endif
