#include"currency.h"
#include<iostream>

    currency::currency():m_rupees(0),m_paisa(0)
    {
    }	// Default Constructor
    
    
    currency::currency(int r,int p):m_rupees(r),m_paisa(p)	// Parameterized Constructor
    {
    }	
    currency::currency(int r):m_rupees(r)		//Constructor
    {
    }
    currency currency:: operator+(const currency &r)	// Operator Overloading of "+"
    {
        currency c3;
        c3.m_rupees=m_rupees+r.m_rupees;
        c3.m_paisa=m_paisa+r.m_paisa;
        while(c3.m_paisa>100)
        {
            c3.m_rupees=c3.m_rupees+1;
            c3.m_paisa=c3.m_paisa-100;
        }
        return c3;
    }
    currency currency::operator-(const currency &r)	// Operator Overloading of "-"
    {
        currency c3;
        if(m_paisa<r.m_paisa)
        {
            c3.m_paisa=(m_paisa-r.m_paisa)+100;
            c3.m_rupees=m_rupees-r.m_rupees-1;
        }
        else
        {
            c3.m_rupees=m_rupees-r.m_rupees;
            c3.m_paisa=m_paisa-r.m_paisa;
        }
        return c3;
    }
    void currency::operator+(int r)		// Operator Overloading of "+"
    {
        m_rupees=m_rupees+r;
    }
    
    int currency::operator-(int r)	// Operator Overloading of "-"
    {
  	  m_rupees=m_rupees-r;
 	}
    int currency::operator++()		// Operator Overloading of "++" preincrement	
    {
    	m_rupees=m_rupees+1;
    }
    int currency::operator++(int a)		// Operator Overloading of "++"  postincrement
    {
    	m_rupees=m_rupees+a;
    }
    bool currency::operator== (int a)	// Operator Overloading of "=="
    {
        if(m_rupees==a)
        {
            return true;
        }
        else{return false;}
    }
    bool currency::operator > (int a)	// Operator Overloading of ">"
    {
        if(m_rupees>a)
        {
            return true;
        }
        else{return false;}
    }
    int currency::display()	// Display function
    {
    	return m_rupees;
    	return m_paisa;
    	}
    int currency::ru(){return m_rupees;}
    int currency::pai(){return m_paisa;}


