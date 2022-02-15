#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluatePostive){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ(6.0, value3->evaluate());
}

TEST(MultTest, MultStringifyPostive){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ("(2.000000 * 3.000000)", value3->Stringify());
}

TEST(MultTest, MultEvaluateNegative){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ(-6.0, value3->evaluate());
}

TEST(MultTest, MultStringifyNegative){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ("(-2.000000 * 3.000000)", value3->Stringify());
}

TEST(MultTest, MultEvaluateZero){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ(0.0, value3->evaluate());
}

TEST(MultTest, MultStringifyNegative){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Op* value3 = new Mult(value1, value2);
    EXPECT_EQ("(0.000000 * 3.000000)", value3->Stringify());
}

#endif
