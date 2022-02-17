#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
public:
    Add(Base* lhs, Base* rhs) : Base() {
        left = lhs;
        right = rhs;
    }

    virtual double evaluate() {
        return left->evaluate() + right->evaluate();
    }

    virtual std::string stringify() {
        return '(' + left->stringify() + " + " + right->stringify() + ')';
    }

private:
    Base* left;
    Base* right;
};

#endif