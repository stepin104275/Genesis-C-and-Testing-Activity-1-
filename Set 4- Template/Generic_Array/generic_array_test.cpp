#include "generic_array.h"
#include "gtest/gtest.h"
#include "generic_array.cpp"

TEST(MyArray,ParameterConstructor)
{
    MyArray <int> a(3);
    a.append(30);
    a.append(49);
    a.append(4);
    EXPECT_EQ(83,a.sum());
}

