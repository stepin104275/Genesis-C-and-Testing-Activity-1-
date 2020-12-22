#include "fraction.h"
#include "gtest/gtest.h"

TEST(fraction,DefaultConstructor)
{
    fraction f1;
    EXPECT_EQ(0,f1.num());
    EXPECT_EQ(0,f1.den());
}
TEST(fraction,ConstructorTwoarg)
{
    fraction f1(9,8);
    EXPECT_EQ(9,f1.num());
    EXPECT_EQ(8,f1.den());
}
TEST(fraction,ConstructorOnearg)
{
    fraction f1(5);
    EXPECT_EQ(5,f1.num());
    EXPECT_EQ(1,f1.den());
}
TEST(fraction,Plusoverloading)
{
    fraction f1(1,7);
    fraction f2(1,7);
    fraction f3=f1+f2;
    EXPECT_EQ(14,f3.num());
    EXPECT_EQ(49,f3.den());
}
TEST(fraction,Minusoverloading)
{
    fraction f1(1,8);
    fraction f2(1,7);
    fraction f3=f1-f2;
    EXPECT_EQ(-1,f3.num());
    EXPECT_EQ(56,f3.den());
}
TEST(fraction,staroverloading)
{
    fraction f1(2,7);
    f1*6;
    EXPECT_EQ(12,f1.num());
    EXPECT_EQ(7,f1.den());
}
TEST(fraction,Plusintargoverloading)
{
    fraction f1(1,7);
    f1+7;
    EXPECT_EQ(50,f1.num());
    EXPECT_EQ(7,f1.den());
}
TEST(fraction,Minusintargoverloading)
{
    fraction f1(1,7);
    f1-7;
    EXPECT_EQ(-48,f1.num());
    EXPECT_EQ(7,f1.den());
}
TEST(fraction,EqualsEqualsoverloading)
{
    fraction f1(14,7);
    EXPECT_EQ(true,f1.operator==(2));
}
TEST(fraction,Greaterthanoverloading)
{
    fraction f1(14,7);
    EXPECT_EQ(false,f1.operator>(3));
}
TEST(fraction,Lessthanoverloading)
{
    fraction f1(14,7);
    EXPECT_EQ(true,f1.operator<(10));
}



