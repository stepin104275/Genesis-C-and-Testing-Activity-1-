#include<iostream>
#include "distance.h"

    distance::distance():m_feets(0),m_inches(0)
    {
	//Default Constrcutor
    }
    distance::distance(int a,int b):m_feets(a),m_inches(b)
    {
    	//parameterized Constructor
    }
    distance distance::operator+(const distance &r)	// Operator Overloading "+"
    {
        distance d3;
         if((m_inches+r.m_inches)>12)
        {
            d3.m_feets=m_feets+r.m_feets+1;
            d3.m_inches=m_inches+r.m_inches-12;
        }
        else
        {
        d3.m_feets=m_feets+r.m_feets;
        d3.m_inches=m_inches+r.m_inches;
        }

        return d3;
    }
    distance distance:: operator-(const distance &r)		// Operator Overloading "+"
    {
        distance d3;
        if (m_inches<r.m_inches)
        {
            d3.m_inches=m_inches-r.m_inches+12;
            d3.m_feets=m_feets-r.m_feets-1;
        }
        else
        {
                d3.m_inches=m_inches-r.m_inches;
                d3.m_feets=m_feets-r.m_feets;
        }
        return d3;
    }
    void distance::operator+(int r)		// Operator Overloading "+"
    {
    	m_feets=m_feets+r;
    }
    void distance::operator-(int r)		// Operator Overloading "+"
    {
    	if(m_feets>r)
    	{
    		m_feets=m_feets-r;
    	}
    }	
    void distance::operator++()		// Operator Overloading "++" preincement
    {
    	m_feets++;
    	}
    void distance::operator++(int r)		// Operator Overloading "+" postincrement
    {
    	m_feets=m_feets+r;
    }
    bool distance::operator== (int r)		// Operator Overloading "=="
    {
        if((m_feets==r)&&(m_inches==0)){return true;}
        else{return false;}
    }
    bool distance::operator > (int r)		// Operator Overloading ">"
    {
        if(m_feets>r)
       {
       	return true;
       }
       else
       {
       	return false;
       }
       }
    bool distance::operator < (int r)		// Operator Overloading "<"
    {
        if(m_feets<r){return true;}else{return false;}
    }
    int distance::display(){return m_feets;return m_inches;;}	//Display fucntion
    int distance::feet(){return m_feets;}
    int distance::inch(){return m_inches;}



