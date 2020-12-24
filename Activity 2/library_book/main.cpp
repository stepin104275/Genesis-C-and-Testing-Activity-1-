#include "book.h"
#include "library.h"
#include<iostream>

int main()
{
    Library l1;

    l1.addBook(001,"Programming in C","Balaguru Swamy",2012,200.0,300);
    l1.addBook(002,"Java Concepts","Aravind Devaraju",2015,400.0,260);
    l1.addBook(003,"Data Structures","Abhishek Gawala",2012,700.0,700);
 
    l1.displayAll();
    cout<< l1.isBookFound(002)<<endl;
    cout<<l1.findAveragePrice()<<endl;
   // cout<<l1.findBookwithMaxPages()<<endl;


    return 0;


}