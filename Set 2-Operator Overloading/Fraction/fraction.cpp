#include <iostream>
#include "fraction.h"
using namespace std;

    fraction::fraction():m_numerator(0),m_denominator(0)
    {
    	//Deafult Constructor
    }
    
    fraction::fraction(int a,int b):m_numerator(a),m_denominator(b)
    {
    //Parameterized Constructor
    }
    fraction::fraction(int a):m_numerator(a),m_denominator(1)
    {
    	// Constructor
    }	
    
    // Different Fraction Overoading function
    fraction fraction::operator+(const fraction &r)
    {
        int lcm=r.m_denominator*m_denominator;
        fraction f;
        int num1=m_denominator*r.m_numerator;
        int num2=r.m_denominator*m_numerator;
        f.m_numerator=num1+num2;
        f.m_denominator=lcm;
        return f;
    }
    fraction fraction::operator-(const fraction &r)
    {
        int lcm=r.m_denominator*m_denominator;
        fraction f;
        int num1=m_denominator*r.m_numerator;
        int num2=r.m_denominator*m_numerator;
        f.m_numerator=num2-num1;
        f.m_denominator=lcm;
        return f;
    }
    int fraction:: operator*(int r)
    {
       m_numerator=m_numerator*r;
    }
    void fraction:: operator+(int r)
    {
        int num1=m_denominator*r;
        m_numerator=m_numerator+num1;
    }
    void fraction::operator-(int r)
    {
        int num1=m_denominator*r;
        m_numerator=m_numerator-num1;
    }
    bool fraction::operator== (int r)
    {
        if((int(m_numerator/m_denominator))==r)
        {
            return true;
        }
    }
    bool fraction::operator > (int r)
    {
        int num=int(m_numerator/m_denominator);
        if (num>r)
        {
            return true;
        }
        else{return false;}
    }
    bool fraction::operator < (int r)
    {
        int num=int(m_numerator/m_denominator);
        if (num<r)
        {
            return true;
        }
        else{return false;}
    }
    void fraction::simplify()
    {
        int num=int(m_numerator/m_denominator);
        m_denominator=1;
        m_numerator=num;
    }
    void fraction::issimplest()
    {
        int num=int(m_numerator/m_denominator);
        m_denominator=1;
        m_numerator=num;
        }
    void fraction::display(){cout<<"this is numerator"<<m_numerator<<endl;cout<<"this is denominator"<<m_denominator<<endl;}
    int fraction:: num(){return m_numerator;}
    int fraction::den(){return m_denominator;}


