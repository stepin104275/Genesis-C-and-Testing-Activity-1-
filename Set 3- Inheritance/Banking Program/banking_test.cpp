#include "account.h"
#include"savingsaccount.h"
#include"creditaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *a1=new SavingsAccount("15","Raj",20000);
    a1->debit(500);
    a1->credit(200);
    EXPECT_EQ(19700,a1->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *a2=new CreditAccount("20","LabeebALi",20000);
    a2->debit(500);
    a2->credit(1000);
    EXPECT_EQ(20500,a2->getBalance());
}


