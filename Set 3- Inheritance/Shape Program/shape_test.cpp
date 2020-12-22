#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>

TEST(Circle,Area)
{
    Circle c1(300);
    EXPECT_EQ(282600,c1.area());
    EXPECT_EQ(1884,c1.circumference());
}
TEST(Triangle,Area)
{
    Triangle t1(10,8,6);
    EXPECT_EQ(24,t1.area());
    EXPECT_EQ(24,t1.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle r1(10,20);
    EXPECT_EQ(200,r1.area());
    EXPECT_EQ(60,r1.circumference());
}
