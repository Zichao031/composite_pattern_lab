#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <string>
#include <stdlib.h>

class Rand : public Base {
    public:
        Rand() : Base() { 
            opValue = rand() % 100;
        }
        
        double evaluate() { return opValue; }
        
        std::string stringify() { return std::to_string(opValue); }
    
    private:
        double opValue = 0;
        
};

#endif //__RAND_HPP__
