//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 Treasure Island

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "Enemies.h"
using namespace std;

Enemies :: Enemies(){
    for(int i=0; i<5; i++)
    {
        name[i]="";
        health[i]=0;
        eyeSight[i]=0;
        endurance[i]=0; 
        enemyDamage[i]=0;
        
        
        
    }
    
}

void Enemies :: setName(string name_, int numEnemies)
{
    name[numEnemies]=name_;
}  


void Enemies :: setHealth(int health_, int numEnemies)
{

    health[numEnemies]=health_;

}



void Enemies::setEyeSight(int eyeSight_, int numEnemies)
{
    eyeSight[numEnemies]=eyeSight_;
}



void  Enemies :: setEnderance(int endurance_, int numEnemies)
{
    endurance[numEnemies]=endurance_;
}



void Enemies :: setEnemyDamage(int damage_, int numEnemies)
{
    enemyDamage[numEnemies]=damage_;
}

int Enemies :: showEnemyDamage(int numEnemies)
{
    return enemyDamage[numEnemies];
}


string Enemies ::  showName(int numEnemies){
    return name[numEnemies];
}

int Enemies :: showEndurance(int numEnemies)
{
    return endurance[numEnemies];
}

int Enemies::showEyeSight(int numEnemies)
{
    eyeSight[numEnemies];
    
    return eyeSight[numEnemies];
}

int Enemies ::  showHealth(int numEnemies)
{
    health[numEnemies];
    
    return health[numEnemies];
}