#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
public:
    Sub(Base* lhs, Base* rhs) : Base() {
        left = lhs;
        right = rhs;
    }

    double evaluate() {
        return left->evaluate() - right->evaluate();
    }

    std::string stringify() {
        return '(' + left->stringify() + " - " + right->stringify() + ')';
    }

private:
    Base* left;
    Base* right;
};

#endif