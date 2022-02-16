#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
public:
    Div(Base* lhs, Base* rhs) : Base() {
        left = lhs;
        right = rhs;
    }

    double evaluate() {
        return left->evaluate() / right->evaluate();
    }

    std::string stringify() {
        return '(' + left->stringify() + " / " + right->stringify() + ')';
    }

private:
    Base* left;
    Base* right;
};

#endif