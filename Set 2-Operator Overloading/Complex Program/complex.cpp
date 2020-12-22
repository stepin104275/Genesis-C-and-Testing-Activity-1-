#include <iostream>
#include "complex.h"
using namespace std;

    complex::complex():m_real(0),m_imag(0){}	// Default Constructor
    
    complex::complex(int real,int imag):m_real(real),m_imag(imag){}	//Parameterized Constructor
    
    complex::complex(int real):m_real(real),m_imag(0){}	// Constructor
    
    
    complex complex:: operator+(complex r)	//Overloading of "+"
    {
        complex c3;
        c3.m_real=m_real+r.m_real;
        c3.m_imag=m_imag+r.m_imag;
        return c3;
    }
    complex complex:: operator-(complex r)	//Overloading of "-"
    {
        complex c3;
        c3.m_real=m_real-r.m_real;
        c3.m_imag=m_imag-r.m_imag;
        return c3;
    }
    complex complex:: operator*(complex r)	//Overloading of "*"
    {
        complex c3;
        c3.m_real = m_real * r.m_real  - m_imag * r.m_imag;
        c3.m_imag = m_real * r.m_imag + m_imag * r.m_real;
        return c3;
    }
    int complex::operator++()			//Overloading of "++" preincrement
    {
        m_real=m_real+1;
    }
    
    
    int complex::operator++(int r){		//Overloading of "++" postincrement
    m_real=m_real+r;
    return m_real;
    }
    bool complex::operator==(complex r)
    {
    if((r.m_real==m_real)&&(r.m_imag==r.m_imag))
    {
    return true;
    }
    else
    {
    return false;
    }
    }
    
    int complex::rval(){return m_real;}	//return real value
    
    int complex::ival(){return m_imag;}	// return imaginary value
    
    int complex::display(){cout<<rval()<<endl;cout<<ival()<<endl;}

