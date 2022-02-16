#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <string>

class Rand : public Base {
private:
    double val;
public:
    Rand() : Base() {
        val = rand() % 100;
    }
    virtual double evaluate() { return val; }
    virtual std::string stringify() { return std::to_string(val); }
};

#endif //__RAND_HPP__