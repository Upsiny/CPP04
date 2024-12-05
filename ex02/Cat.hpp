#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
private:
    Brain*  _brain;

public:
    Cat( void );
    Cat( const Cat &src );
    ~Cat( void );

    //get & set
    void        setIdeas( int i, std::string idea );
    std::string getIdea(int i) const;
    
    //functions
    void        makeSound( void ) const;

    //operator
    Cat&          operator=(const Cat &src);
};

#endif
