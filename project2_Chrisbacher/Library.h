//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <string>
using namespace std;

class Library
{
    private:
    Book books[50];
    User users[100];
    int numBooks;
    int numUsers;
    
    public:
    //setters
    Library();
    int readBooks(string);
    int readRatings(string);
    void addUser(string);
    void updateRating(string, string, int);
    
    
    
    //getters
    int getNumBooks();
    int getNumUsers();
    void viewRatings(string, int);
    void printAllBooks();
    void getRecommendations(string);
    
    
};
#endif