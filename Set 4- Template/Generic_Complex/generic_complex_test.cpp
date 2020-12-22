#include "generic_complex.h"
#include "gtest/gtest.h"
#include "generic_complex.cpp"


TEST(Complex,DefaultConstructor)
{
    Complex <int> a;
    EXPECT_EQ(0,a.re());
    EXPECT_EQ(0,a.img());
}


TEST(Complex,ParameterConstructor)
{
    Complex <int> Ci(10,20);
    EXPECT_EQ(10,Ci.re());
    EXPECT_EQ(20,Ci.img());
}


TEST(Complex,FloatConstructor)
{
    Complex <double> a(10.2,20.2);
    EXPECT_EQ(10.2,a.re());
    EXPECT_EQ(20.2,a.img());
}


