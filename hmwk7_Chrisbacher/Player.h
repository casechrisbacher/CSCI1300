//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 1

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
    private:                //data members
        string name;
        double points;
    
    public:                 //Member functions
        Player();
        Player(string, double);
    
    //getters
         string getName();
         double getPoints();
    //setters
         void setName(string);
         void setPoints(double);
    
};

#endif
