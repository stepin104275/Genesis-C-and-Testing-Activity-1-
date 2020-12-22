#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>

TEST(Customer,Postpaid) {
    PostpaidCustomer p1("105","Raj","812",1000,15);
    p1.postpaidbill(500);
    p1.credit(100);
    p1.makeCall(10);
    EXPECT_EQ(590,p1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer p1("105","Raj","812",200,15);
    p1.credit(20);
    p1.makeCall(30);
    EXPECT_EQ(190,p1.getBalance());
}


