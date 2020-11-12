//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
    string title;
    string author;
    
    public:
    //setters
    Book();
    Book(string, string);
    void setTitle(string);
    void setAuthor(string);
    
    //getters
    string getTitle();
    string getAuthor();
    
};
#endif