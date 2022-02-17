#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Sub.hpp"

TEST(SubTest, SubEvaluatePostive) {
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(1.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ(1.0, test->evaluate());
}

TEST(SubTest, SubStringifyPostive) {
    Op* value1 = new Op(2.0);
    Op* value2 = new Op(1.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ("(2.000000 - 1.000000)", test->stringify());
}

TEST(SubTest, SubEvaluateNegative) {
    Op* value1 = new Op(-1.0);
    Op* value2 = new Op(-5.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(SubTest, SubStringNegative) {
    Op* value1 = new Op(-1.0);
    Op* value2 = new Op(-5.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ("(-1.000000 - -5.000000)", test->stringify());
}

TEST(SubTest, SubEvaluateZero) {
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(2.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ(-2.0, test->evaluate());
}

TEST(SubTest, SubStringZero) {
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(2.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ("(0.000000 - 2.000000)", test->stringify());
}

TEST(SubTest, SubEvaluateZero2) {
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(0.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ(0.0, test->evaluate());
}

TEST(SubTest, SubStringZero2) {
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(0.0);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ("(0.000000 - 0.000000)", test->stringify());
}

#endif //__SUB_TEST_HPP__