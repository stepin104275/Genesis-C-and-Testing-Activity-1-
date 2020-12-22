#include"account.h"

Account::Account():m_accNumber(""),m_accName(""), m_balance(0.0)
{
}

Account::Account(std::string accNumber,std::string accName, double balance):m_accNumber(accNumber),m_accName(accName), m_balance(balance)
{
}
Account::Account(std::string accNumber,std::string accName):m_accNumber(accNumber),m_accName(accName)
{
}
Account::Account(const Account &ref):m_accNumber(ref.m_accNumber),m_accName(ref.m_accName), m_balance(ref.m_balance)
{
}
Account::~Account()
{
}

void Account::debit(double amount)
{
         m_balance-=amount;
}
void Account::credit(double amount)
{
    m_balance+=amount;
}
double Account::getBalance() const{
    return m_balance;
}
void Account::display() const{
    std::cout << "Debit : " << m_accNumber
            <<  "Credit :"  << m_accName
            <<  "getBalance : "  << m_balance;
}