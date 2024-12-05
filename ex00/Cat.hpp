#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
# include "Animal.hpp"

class Cat: public Animal {
private:

public:
    Cat( void );
    Cat( const Cat &src );
    ~Cat( void );

    //functions
    void        makeSound( void ) const;

    //operator
    Cat&          operator=(const Cat &src);
};

#endif
