#include "book.h"



Book::Book():m_isbn{0},m_title{""},m_author{""},m_year{0},m_price{0.0},m_pages{0}
{

}
Book::Book(int isbn,string title,string author, int year, double price,int page):m_isbn{isbn},
                                m_title{title},m_author{""},m_year{year},m_price{price},m_pages{page}
{

}

int  Book:: getISBN()
{
    return m_isbn;
}

string Book:: getTitle()
{
    return m_title;
}
string Book:: getAuthor()
{
    return m_author;

}

int  Book:: getYear()
{
    return m_year;
}


double Book:: getPrice()
{
    return m_price;
}
int  Book:: getPage()
{
    return m_pages;
}

void Book:: display() 
{
    cout<<m_isbn<<"  "
        <<m_title<<"  " 
        <<m_author<<"  "
        <<m_year<<"  "
        <<m_price<<"  "
        <<m_pages<<endl;
}