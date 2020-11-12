//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 TREASURE ISLAND

#ifndef PIRATES_H
#define PIRATES_H
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Pirates
{
    private:
    int herohealth;
    int speed;
    int strength;
    int camo;
    string character;
    int herodamage;
    
    public:
    void choosecharacter(string);
    void setherohealth(int);
    void setspeed(int);
    void setcamo(int);
    void setstrength(int);
    
    //getters
    int showherohealth();
    int herodamagecall();
    int getHeroCamo();
    int getHeroSpeed();
    
    
    
    
    
};
#endif