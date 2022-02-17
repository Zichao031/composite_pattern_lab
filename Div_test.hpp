#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Div.hpp"


TEST(DivTest, DivEvaluatePostive){
    Op* value1 = new Op(6.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ(2.0, value3->evaluate());
}

TEST(DivTest, DivStringifyPostive){
    Op* value1 = new Op(6.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ("(6.000000 / 3.000000)", value3->stringify());
}

TEST(DivTest, DivEvaluateNegative){
    Op* value1 = new Op(-6.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ(-2.0, value3->evaluate());
}

TEST(DivTest, DivStringifyNegative){
    Op* value1 = new Op(-6.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ("(-6.000000 / 3.000000)", value3->stringify());
}

TEST(DivTest, DivEvaluateZero){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ(0.0, value3->evaluate());
}

TEST(DivTest, DivStringifyZero){
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(3.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ("(0.000000 / 3.000000)",value3->stringify());
}

TEST(DivTest, DivEvaluateZero2){
    Op* value1 = new Op(4.0);
    Op* value2 = new Op(0.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ(std::numeric_limits<double>::max(), value3->evaluate());
}


TEST(DivTest, DivStringifyZero2){
    Op* value1 = new Op(4.0);
    Op* value2 = new Op(0.0);
    Div* value3 = new Div(value1, value2);
    EXPECT_EQ("(4.000000 / 0.000000)", value3->stringify());
}
#endif