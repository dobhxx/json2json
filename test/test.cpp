
#include "gtest/gtest.h"
#include "math.hh"
 
TEST(math, Add) {
    MathTest a;
    EXPECT_EQ(a.Add(), 9);
}