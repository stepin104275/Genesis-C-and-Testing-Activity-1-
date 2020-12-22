#include "currency.h"
#include <gtest/gtest.h>


TEST(currency,plusOperator)
{
    currency c1(100,200);
    currency c2(100,200);
    currency c3;
    c3=c1+c2;
    EXPECT_EQ(203,c3.ru());
    EXPECT_EQ(100,c3.pai());

}
TEST(currency,Plusnum)
{
    currency c1(100,200);
    c1+300;
    EXPECT_EQ(400,c1.ru());
    EXPECT_EQ(200,c1.pai());
}
TEST(currency,MinusOperator)
 {
    currency c1(200,200);
    currency c2(100,100);
    currency c3;
    c3=c1-c2;
    EXPECT_EQ(100,c3.ru());
    EXPECT_EQ(100,c3.pai());

}
TEST(currency,MinusArg)
{
    currency c1(40,40);
    c1-30;
    EXPECT_EQ(10,c1.ru());
    EXPECT_EQ(40,c1.pai());
}

TEST(currency,PLusPlusOperator)
 {
    currency c1(100,200);
    ++c1;
    EXPECT_EQ(101,c1.ru());
    EXPECT_EQ(200,c1.pai());

}
TEST(currency,PLusPlusPostIncrement)
{
    currency c1(100,200);
    c1.operator++();
    EXPECT_EQ(101,c1.ru());
    EXPECT_EQ(200,c1.pai());
}
TEST(currency,EqualsEqulasOperator) {
    currency c1(10,20);
    currency c3(11,20);
    EXPECT_EQ(1,c1==10);
    EXPECT_EQ(1,c3==11);
}
TEST(currency,GreaterThanOperator) {
    currency c1(10);
    EXPECT_EQ(0,c1.operator>(15));
    EXPECT_EQ(1,c1.operator>(8));
}
