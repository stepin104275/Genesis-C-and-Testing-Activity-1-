#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
using namespace std;

class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;


  public:
    Book();         //TODO: default ctor
    Book(int,string,string,int,double,int);       //TODO: param ctor
    int getISBN();
    string getTitle();
    string getAuthor();
    int getYear();
    double getPrice();
    int getPage();
     void display();                //TODO:- display

};
#endif
