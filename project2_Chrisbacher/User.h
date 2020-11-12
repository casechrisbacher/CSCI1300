//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using namespace std;

class User
{
    private:
    string username;
    int ratings[50];
    
    public:
    //setters
    User();
    void setUsername(string);
    bool setRatingAt(int, int);
    
    //getters
    string getUsername();
    int getRatingAt(int);
    
};
#endif