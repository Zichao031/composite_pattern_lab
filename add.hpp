#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
    private:
        Base* left;
        Base* right;
        
    public:
        Add(Base* lhs, Base* rhs) : Base() {
            left = lhs;
            right = rhs;
        }
        double evaluate() { 
            return left->evaluate() + right->evaluate();
        }
        std::string stringify() { 
            return "(" + left->stringify() + " + " + right->stringify() + ")";
        }

};

#endif //__ADD_HPP__
