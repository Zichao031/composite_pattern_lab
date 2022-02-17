#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <stdexcept>
#include <limits>

class Div : public Base {
public:
    Div(Base* lhs, Base* rhs) : Base() {
        left = lhs;
        right = rhs;
    }

    virtual double evaluate() {
        if (right->evaluate() == 0.0) {
            return std::numeric_limits<double>::max();
        }
        return left->evaluate() / right->evaluate();
    }

    virtual std::string stringify() {
        return '(' + left->stringify() + " / " + right->stringify() + ')';
    }

private:
    Base* left;
    Base* right;
};

#endif