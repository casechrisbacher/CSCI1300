//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 2

#ifndef TEAM_H
#define TEAM_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Team
{
    private:                    //data members
    string teamName;
    Player players[50];         //50 players per team
    int numPlayers;
    
    public:                     //Member functions
    Team();
    Team(string teamName);
    
    //setters
    void setTeamName(string);
    
    //getters
    int readRoster(string);         //input string, return int
    string getPlayerName(int);      //input int get double
    double getPlayerPoints(int);    //input int get double
    int getNumPlayers();
    string getTeamName();
    
    

    
};

#endif