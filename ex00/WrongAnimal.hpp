#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string _type;

public:
    WrongAnimal( void );
    WrongAnimal(const WrongAnimal &src);
    ~WrongAnimal( void );

    //get & set
    void        setType(std::string type);
    std::string getType( void ) const ;

    //functions
    void        makeSound( void ) const ;

    //operator
    WrongAnimal&          operator=(const WrongAnimal &src);
};

#endif
