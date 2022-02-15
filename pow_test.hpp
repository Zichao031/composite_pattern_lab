#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "base.hpp"
#include "pow.hpp"

TEST(PowTest, PowEvaluateOne){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(1.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ(2.0, value3->evaluate());
}

TEST(PowTest, PowStringifyOne){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(1.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ("(2.000000 ** 1.000000)", value3->stringify());
}

TEST(PowTest, PowEvaluateZero){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(0.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ(1.0, value3->evaluate());
}

TEST(PowTest, PowStringifyZero){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(0.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ("(2.000000 ** 0.000000)", value3->stringify());
}

TEST(PowTest, PowEvaluateTwo){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(2.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ(4.0, value3->evaluate());
}

TEST(PowTest, PowStringifyTwo){
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(2.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ("(2.000000 ** 2.000000)", value3->stringify());
}

TEST(PowTest, PowEvaluateNegative){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(2.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ(4.0, value3->evaluate());
}

TEST(PowTest, PowStringifyNegative){
    Op* value1 = new Op(-2.0);
    Op* value2 = new Op(2.0);
    Pow* value3 = new Pow(value1, value2);
	  EXPECT_EQ("(-2.000000 ** 2.000000)", value3->stringify());
}

#endif
