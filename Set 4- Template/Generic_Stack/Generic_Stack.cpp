#include"Generic_Stack.h"
#include<iostream>
#include<iostream>
using namespace std;
template <class T>			// Declaration of Template
MyStack<T>::MyStack()			// Default Constructor of MyStack Class
{
	m_arr[max_size];
	m_maxlen = 0;
	m_top = -1;
}
template <class T>
MyStack<T>::MyStack(int s)		// Parameterized Constructor of MyStack Class
{
	m_arr[s];
	m_maxlen = s;
	m_top = -1;
}

//Implementation of various function

template <class T>
void MyStack<T>::push(T x)	// Push function to insert into the stack	
{
	if (isFull())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Inserting " << x << endl;
	m_arr[++m_top] = x;
}
template <class T>
T MyStack<T>::pop()		// Pop function to delete the element from stack
{
	if (isEmpty())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Removing " << peek() << endl;
	return m_arr[m_top--];
}
template <class T>
T MyStack<T>::peek()		// Peek Function to retrieve the first element
{
	if (!isEmpty())
		return m_arr[m_top];
	else
		exit(EXIT_FAILURE);
}
template <class T>
bool MyStack<T>::isEmpty()	// Underflow condition
{
	return m_top == -1;
}
template <class T>
bool MyStack<T>::isFull()	// Overflow Function
{
	return m_top == m_maxlen - 1;
}
