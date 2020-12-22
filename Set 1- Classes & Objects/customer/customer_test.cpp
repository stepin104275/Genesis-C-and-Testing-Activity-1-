#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer,DefaultConstructor) {
    Customer c1;
    c1.credit(1000);
    c1.makeCall(100);
    EXPECT_EQ(900.0,c1.getBalance());

}

TEST(Customer,ParameterisedConstructor) {
    Customer c2("1","Srijan","9041",1000);
    c2.credit(1000);
    c2.makeCall(500);
    EXPECT_EQ(1500.0,c2.getBalance());

}

TEST(Customer,CopyConstructor) {
 Customer c2("1","Srijan","9041",1000);
    Customer c3(c2);
      
    c2.credit(1000);
    c2.makeCall(500);
    EXPECT_EQ(1500.0,c2.getBalance());


}

