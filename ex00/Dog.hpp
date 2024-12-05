#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
# include "Animal.hpp"

class Dog: public Animal {
private:

public:
    Dog( void );
    Dog( const Dog &src );
    ~Dog( void );

    //functions
    void        makeSound( void ) const;

    //operator
    Dog&          operator=(const Dog &src);
};

#endif
