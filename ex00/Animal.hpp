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
    ~Animal( void );

    //get & set
    void        setType(std::string type);
    std::string getType( void );

    //operator
    Animal&          operator=(const Animal &src);
};

#endif
