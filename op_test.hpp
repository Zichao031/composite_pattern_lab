#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(OpTest, OpStringNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), "8.000000");
}

TEST(OpTest, OpStringNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), "-8.000000");
}

#endif //__OP_TEST_HPP__
