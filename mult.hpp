#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
        Mult(Base* lhs, Base* rhs) : Base() {
            left = lhs;
            right = rhs;
        }
  
        double evaluate() {
           return left->evaluate() * right->evaluate();
        }
  
        std::string stringify() {
            return '(' + left->stringify() + " * " + right->stringify() + ')';
        }
        
    private:
        Base* left;
        Base* right;
};

#endif
