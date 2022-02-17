#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Mult.hpp"

TEST(MultTest, MultEvaluatePostive) {
    Op* value1 = new Op(5.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(value3->evaluate(), 15);
}

TEST(MultTest, MultStringifyPostive){
    Op* value1 = new Op(5.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(value3->stringify(), "(5.000000 * 3.000000)");
}

TEST(MultTest, MultEvaluateNegative){
    Op* value1 = new Op(-5.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(value3->evaluate(), -15);
}

TEST(MultTest, MultStringifyNegative){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ("(-2.000000 * 3.000000)", value3->stringify());
}

TEST(MultTest, MultEvaluateNegative2){
    Op* value1 = new Op(-5.0);
    Op* value2 = new Op(-3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(value3->evaluate(), 15);
}

TEST(MultTest, MultStringifyNegative2){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(-3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ("(-2.000000 * -3.000000)", value3->stringify());
}

TEST(MultTest, MultEvaluateZero){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(0.0, value3->evaluate());
}

TEST(MultTest, MultStringifyZero){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ("(0.000000 * 3.000000)", value3->stringify());
}

TEST(MultTest, MultEvaluateZero2){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(0.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ(0.0, value3->evaluate());
}

TEST(MultTest, MultStringifyZero2){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(0.0);
    Mult* value3 = new Mult(value1, value2);
    EXPECT_EQ("(0.000000 * 0.000000)", value3->stringify());
}
#endif