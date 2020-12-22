#include "distance.h"
#include "gtest/gtest.h"

TEST(distance,DefaultConstructor)
{
    distance d1;
    EXPECT_EQ(0,d1.feet());
    EXPECT_EQ(0,d1.inch());
}
TEST(distance,DefaultConstructorarg)
{
    distance d1(10,20);
    EXPECT_EQ(10,d1.feet());
    EXPECT_EQ(20,d1.inch());
}
TEST(distance,PlusOverloading)
{
    distance d1(2,5),d2(2,5);
    distance d3=d1+d2;
    EXPECT_EQ(4,d3.feet());
    EXPECT_EQ(10,d3.inch());
}
TEST(distance,MinusOverloading)
{
    distance d1(7,4),d2(2,2);
    distance d3=d1-d2;
    EXPECT_EQ(5,d3.feet());
    EXPECT_EQ(2,d3.inch());
}
TEST(distance,PLusArgOverloading)
{
    distance d1(7,5);
    d1+(6);
    EXPECT_EQ(13,d1.feet());
    EXPECT_EQ(5,d1.inch());
}
TEST(distance,MinusArgOverloading)
{
    distance d1(7,5);
    d1-(2);
    EXPECT_EQ(5,d1.feet());
    EXPECT_EQ(5,d1.inch());
}
TEST(distance,PlusPLusOverloading)
{
    distance d1(7,5);
    d1.operator++();
    EXPECT_EQ(8,d1.feet());
    EXPECT_EQ(5,d1.inch());
}
TEST(distance,PlusPLusArgOverloading)
{
    distance d1(8,7);
    d1.operator++(5);
    EXPECT_EQ(13,d1.feet());
    EXPECT_EQ(7,d1.inch());
}
TEST(distance,EqulasEqualsOverloading)
{
    distance d1(4,0);
    EXPECT_EQ(true,d1.operator==(4));
}
TEST(distance,GreaterthanOverloading)
{
    distance d1(4,2);
    EXPECT_EQ(false,d1.operator>(5));
}
TEST(distance,LessthanOverloading)
{
    distance d1(4,0);
    EXPECT_EQ(true,d1.operator<(5));
}


