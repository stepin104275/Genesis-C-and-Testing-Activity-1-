#include "Generic_Stack.h"
#include "gtest/gtest.h"
#include "Generic_Stack.cpp"


TEST(MyStack,ParameterConstructor)
{
    MyStack <int> S1(3);
    a.push(1);
    a.push(2);
    a.push(3);
    EXPECT_EQ(3,a.pop());
}

TEST(MyStack,ParameterConstructor)
{
    MyStack <int> S2(1);
    a.push(10);
    EXPECT_EQ(10,S2.peek());
}


