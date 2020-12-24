#include<iostream>
#include"account.h"
#include"banking.h"

int main(){
    Banking bank;
    bank.addAccount(1,"Salman",200.0,"9041543012");
    bank.addAccount(2,"Akash",400.25,"9016789861");
    bank.addAccount(3,"Abhishek",100.0,"8018981236");
    bank.addAccount(4,"Srijan",500.0,"9089778912");
    bank.addAccount(5,"Manav",2050.0,"9876878563");
    bank.addAccount(6,"Naveen",130.0,"8076547836");
    bank.displayAll();
    bank.removeAccount(3);
    return 0;
}