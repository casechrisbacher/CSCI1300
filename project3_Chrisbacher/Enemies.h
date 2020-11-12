//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 TREASURE ISLAND

#ifndef ENEMIES_H
#define ENEMIES_H
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Enemies
{
    private:
    string name[5];
    int health[5]; //Lowest being 0 highest being 100
    int eyeSight[5]; //lowest being zero highest being 20
    int endurance[5];  //1-5
    int enemyDamage[5]; //1-15
   

   
   
    public:
        Enemies();
        void setHealth(int health_, int numEnemies);
        void setName(string name_, int numEnemies);
        void setEyeSight(int, int numEnemies);
        void setEnderance(int, int numEnemies);
        void enemy(int);
        void setEnemyDamage(int, int numEnemies);
        int showHealth(int);
        string showName(int);
        int showEyeSight(int);
        int showEndurance(int);
        int showEnemyDamage(int);
   
   

};
#endif
