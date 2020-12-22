#ifndef __GSTACK_H
#define __GSTACK_H

constexpr int max_size=50;

template<class T>
class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  public:
  MyStack();		// Default Constructor
  MyStack(int len);	//Parameterized Constructor
  
  // Different function declaration
  
  
  void push(T val);
  T pop();
  T peek();
  bool isEmpty();
  bool isFull();
};

#endif

