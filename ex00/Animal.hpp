#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

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

    //functions
    void        virtual makeSound( void ) const ;

    //operator
    Animal&          operator=(const Animal &src);
};

#endif
