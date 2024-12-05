#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
# include "Animal.hpp"

class Brain {
private:
    std::string _ideas[100];

public:
    Brain( void );
    Brain(const Brain &src);
    ~Brain( void );

    //set & get
    void        setIdeas( int i, std::string idea );
    std::string getIdea(int i) const;

    Brain&          operator=(const Brain &src);
};

#endif
