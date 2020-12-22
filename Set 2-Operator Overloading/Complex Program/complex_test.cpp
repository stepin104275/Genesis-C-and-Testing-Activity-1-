#include "complex.h"
#include "gtest/gtest.h"

TEST(complex,DefaultConstructor)
{
    complex c1;
    EXPECT_EQ(0,c1.rval());
    EXPECT_EQ(0,c1.ival());
}
TEST(complex,TwoParameterConstructor)
{
    complex c1(1,2);
    EXPECT_EQ(1,c1.rval());
    EXPECT_EQ(2,c1.ival());
}
TEST(complex,OneParameterConstructor)
{
    complex c1(5);
    EXPECT_EQ(5,c1.rval());
    EXPECT_EQ(0,c1.ival());
}
TEST(complex,PlusOverloading)
{
    complex c1(1,2);
    complex c2(3,4);
    complex c3=c1+c2;
    EXPECT_EQ(4,c3.rval());
    EXPECT_EQ(6,c3.ival());
}
TEST(complex,MinusOverloading)
{
    complex c1(5,10);
    complex c2(3,4);
    complex c3=c1-c2;
    EXPECT_EQ(2,c3.rval());
    EXPECT_EQ(6,c3.ival());
}
TEST(complex,PlusPlusOverloading)
{
    complex c1(1,2);
    ++c1;
    EXPECT_EQ(2,c1.rval());
}
TEST(complex,PlusPlusOverloadingarg)
{
    complex c1(1,2);
    c1.operator++(2);
    EXPECT_EQ(3,c1.rval());
}
TEST(complex,EqualsEquals)
{
    complex c1(1,2);
    EXPECT_EQ(true,c1.operator==(1));
}

