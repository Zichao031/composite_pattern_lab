#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>

class Op : public Base {
    public:
        Op(double value) : Base() { 
            opValue = value;
        }
        
        double evaluate() { return opValue; }
        
        std::string stringify() { return std::to_string(opValue); }
    
    private:
        double opValue = 0;
        
};

#endif //__OP_HPP__
