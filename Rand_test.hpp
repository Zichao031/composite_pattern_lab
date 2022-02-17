#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "Rand.hpp"

TEST(RandTest, RandValueEqualsString) {
    Rand* test = new Rand();
    EXPECT_EQ(std::to_string(test->evaluate()), test->stringify());
}

TEST(RandTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    EXPECT_TRUE((test->evaluate() >= 0) && (test->evaluate() <= 99));
}

#endif //__RAND_TEST_HPP__