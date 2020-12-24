#ifndef __LIBRARY_H
#define __LIBRARY_H
#include<iostream>
#include <list>
#include "book.h"



using namespace std;

class Library {
  std::list <Book> books;
  public:
  void addBook(int isbn, std::string title, std::string author,int year, double price, int pages);
  void displayAll();
  //void removeBookByISBN(int isbn);
  bool isBookFound(int);
  
  Book* findBookByISBN(int isbn);
  void removeBookbyISBN(int);
  double findAveragePrice();
  int countBooksInPriceRange(int minVal, int maxVal);
  Book& findBookwithMaxPages();
  //int countBooks();



  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};

#endif
