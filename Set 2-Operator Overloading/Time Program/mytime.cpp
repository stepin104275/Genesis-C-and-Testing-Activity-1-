#include <iostream>
#include"mytime.h"

using namespace std;

    MyTime::MyTime():m_hours{0},m_minutes{0},m_seconds{0} 	// Default Constructor
    {
    }	// Default Constructor

    MyTime::MyTime(int hr,int min,int sec):m_hours{hr},m_minutes{min},m_seconds{sec}	// Parameterized Constructor
   {
   }	

    MyTime::MyTime(int hr,int min):m_hours{hr},m_minutes{min},m_seconds{0}	// Constructor
    {
    }

    MyTime MyTime:: operator +(const MyTime &a)	// Operator overloading "+"
    {
    MyTime t9;
    t9.m_seconds = m_seconds + a.m_seconds;
    t9.m_minutes = m_minutes + a.m_minutes;
    t9.m_hours = m_hours + a.m_hours;
    if(t9.m_seconds>=60 || t9.m_minutes>=60)
    {
        t9.m_minutes+=t9.m_seconds/60;
        t9.m_seconds=t9.m_seconds%60;
        t9.m_hours+=t9.m_minutes/60;
        t9.m_minutes=t9.m_minutes%60;
    }

    return t9;
    }

     MyTime MyTime::operator +(int a)		// Operator overloading "+"
    
    {
    MyTime t9;
    t9.m_seconds = m_seconds + a;
    t9.m_minutes=m_minutes+t9.m_seconds/60;
    t9.m_seconds=t9.m_seconds%60;
    t9.m_hours=m_hours+t9.m_minutes/60;
    t9.m_minutes=t9.m_minutes%60;

    return t9;
    }

 

    MyTime& MyTime::operator++() {    //Operator overloading "+"pre increment
    ++m_seconds;
    return *this;
    }

    MyTime MyTime::operator++(int a) { 	 //Operator overloading "+"post increment
    MyTime t9(*this);
    ++m_seconds;
    return t9;
   }
    MyTime& MyTime::operator +=(const MyTime&a)	 //Operator overloading "+="
    {

    m_seconds = m_seconds + a.m_seconds;
    m_minutes = m_minutes + a.m_minutes;
    m_hours = m_hours + a.m_hours;
    if(m_seconds>=60 || m_minutes>=60)
    {
        m_minutes+=m_seconds/60;
        m_seconds=m_seconds%60;
        m_hours+=m_minutes/60;
        m_minutes=m_minutes%60;
    }
    return *this;

    }

    bool MyTime::operator==(const MyTime& a)		 //Operator overloading "=="
    {
      return m_seconds==a.m_seconds && m_minutes==a.m_minutes && m_hours==a.m_hours;
    }

    bool MyTime::operator < (const MyTime &a) 	 //Operator overloading "<"
    {	
    if(m_hours<a.m_hours )
    {
        return 1;
    }
    else if(m_hours==a.m_hours)
    {
        if(m_minutes<a.m_minutes)
            return 1;
        else if(m_minutes==a.m_minutes)
        {
            if(m_seconds<a.m_seconds)
            return 1;
        else
            return 0;
        }
    }
        return 0;

  }


     bool MyTime::operator > (const MyTime &a) 	 //Operator overloading ">"
     {
    if(m_hours>a.m_hours )
    {
        return 1;
    }
    else if(m_hours==a.m_hours)
    {
        if(m_minutes>a.m_minutes)
            return 1;
        else if(m_minutes==a.m_minutes)
        {
            if(m_seconds>a.m_seconds)
            return 1;
        else
            return 0;
        }
    }
        return 0;

  }

    void MyTime::display()const		//Display Function
    {
        std::cout<<m_hours<<"hr:"<<m_minutes<<"min:"<<m_seconds<<"sec\n";
    }

    int MyTime:: seconds()const{
    return m_seconds;}
  int MyTime::minutes()const{
  return m_minutes;}
  int MyTime::hours()const{
  return m_hours;}

