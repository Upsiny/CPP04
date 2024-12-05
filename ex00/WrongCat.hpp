#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
private:

public:
    WrongCat( void );
    WrongCat( const WrongCat &src );
    ~WrongCat( void );

    //functions
    void        makeSound( void ) const;

    //operator
    WrongCat&          operator=(const WrongCat &src);
};

#endif
