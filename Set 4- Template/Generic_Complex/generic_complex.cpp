#include"generic_complex.h"
#include <iostream>
using namespace std;

template<class T>	// Default Constructor
Complex<T>::Complex():m_real(0),m_image(0){}


template<class T>	//Paramerterized Contructor
Complex<T>::Complex(T a,T b):m_real(a),m_image(b){}

// Complex Function
template <class T>	// To print real number	
T Complex<T>::re()
{
	return m_real;
}	
template <class T>
T Complex<T>::img()	// To return imaginary number
{	
	return m_image;
}

template <class T>
void Complex<T>::display()	//  Display function
{
	cout<<re()<<img();
}

