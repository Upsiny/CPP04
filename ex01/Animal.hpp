#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
# include "Brain.hpp"

class Animal {
protected:
    std::string _type;

public:
    Animal( void );
    Animal(const Animal &src);
    virtual ~Animal( void );

    //get & set
    void        setType(std::string type);
    std::string getType( void ) const ;
    virtual void        setIdeas( int i, std::string idea) = 0;
    virtual std::string getIdea(int i) const = 0;

    //functions
    void        virtual makeSound( void ) const ;

    //operator
    Animal&          operator=(const Animal &src);
};

#endif
