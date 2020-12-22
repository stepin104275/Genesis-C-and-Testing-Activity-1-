#include <iostream>
#include"customer.h"

using namespace std;

    Customer::Customer():
        m_custId{""},m_custName{""},m_phone{""},m_balance{0}{
			// Default Construcor
		}

    Customer::Customer(string id,string name,string phone,double bal):
        m_custId{id},m_custName{name},m_phone{phone},m_balance{bal}{
		// Parametized Construtor}
		}

    Customer::Customer(string id,string name,string phone):
        m_custId{id},m_custName{name},m_phone{phone}{
			//Constructor}
		}
    Customer::Customer(const Customer &a):	
        m_custId{a.m_custId},m_custName{a.m_custName},m_phone{a.m_phone},m_balance{a.m_balance}{
			// Copy Construcor
		}


 //Different Function
   void Customer::credit(double a)		// Credit function to add balance
    {
         m_balance+=a;
    }
   void Customer::makeCall(double a)	// Make call function will deduct the balance
    {
        cout<<"Calling"<<"\n";
        m_balance=m_balance-(a);
    }
    double Customer::getBalance() const		//Functiojn to fetch the balance
    {
       return m_balance;

    }

    void Customer::display()const		// Display function 
    {
        cout<<m_custId<<endl;
        cout<<m_custName<<endl;
        cout<<m_phone<<endl;
        cout<<m_type<<endl;
        cout<<m_balance<<endl;
    }
