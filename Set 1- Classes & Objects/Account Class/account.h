#ifndef __Account_H
#define __Account_H
#include <iostream>

class Account {
std::string m_accNumber;
std::string m_accName;
double m_balance;
public:
Account();
Account(std::string,std::string,double);
Account(std::string,std::string);
Account(const Account&);
~Account();
void debit(double);
void credit(double);
double getBalance() const;
void display() const;
};
#endif