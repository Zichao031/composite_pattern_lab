#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(AddTest, AddEvaluatePostive) {
    Op* value1 = new Op(1.0);
    Op* value2 = new Op(2.0);
    Add* test = new Add(value1, value2);
    EXPECT_EQ(3.0, test->evaluate());
}

TEST(AddTest, AddStringifyPostive) {
    Op* value1 = new Op(1.0);
    Op* value2 = new Op(2.0);
    Add* test = new Add(value1, value2);
    EXPECT_EQ("(1.000000 + 2.000000)", test->stringify());
}

TEST(AddTest, AddEvaluateNegative) {
    Op* value1 = new Op(-1.0);
    Op* value2 = new Op(-2.0);
    Add* test = new Add(value1, value2);
    EXPECT_EQ(test->evaluate(), -3.0);
}

TEST(AddTest, AddStringNegative) {
    Op* value1 = new Op(-1.0);
    Op* value2 = new Op(-2.0);
    Add* test = new Add(value1, value2);
    EXPECT_EQ("(-1.000000 + -2.000000)", test->stringify());
}

TEST(AddTest, AddEvaluateZero) {
    Op* value1 = new Op(0.0);
    Op* value2 = new Op(0.0);
    Add* test = new Add(value1, value2);
    EXPECT_EQ(0.0, test->evaluate());
}

#endif //__ADD_TEST_HPP__
