#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>

class Pow : public Base {
    public:
        Pow(Base* lhs, Base* rhs) : Base() {
            left = lhs;
            right = rhs;
        }
  
        double evaluate() {
           return pow(left->evaluate(), right->evaluate());
        }
  
        std::string stringify() {
            return '(' + left->stringify() + " ** " + right->stringify() + ')';
        }
  
    private:
        Base* left;
        Base* right;
};

#endif
