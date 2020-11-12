//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book :: Book() 
{
    title = "";
    author = "";
}

Book :: Book(string newtitle, string newauthor)
{
    title = newtitle;
    author = newauthor;
}

void Book :: setTitle(string newtitle)
{
    title = newtitle;
}

void Book :: setAuthor(string newauthor)
{
    author = newauthor;
}

string Book :: getTitle()
{
    return title;
}

string Book :: getAuthor()
{
    return author;
}