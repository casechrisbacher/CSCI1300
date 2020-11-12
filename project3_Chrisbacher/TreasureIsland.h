//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 Treasure Island

#ifndef TREASUREISLAND_H
#define TREASUREISLAND_H
#include <iostream>
#include <string>
#include <fstream>
#include "Pirates.h"
#include "Enemies.h"
#include <ctime>
using namespace std;

class TreasureIsland
{
    private:
    Enemies enemies;
    int quitoption = 0;
    
    public:
    void setEnemyAttributes();
    
    int getEnemyHealthAt(int);
    string getEnemyNameAt(int);
    int getEnemyEyeSightAt(int);
    int getEnemyEnduranceAt(int);
    int getEnemyDamageAt(int);
    

    
    void setquitoption(int);
    int showquitoption();

};
#endif