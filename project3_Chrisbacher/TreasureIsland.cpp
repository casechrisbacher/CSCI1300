//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 Treasure Island

#include <iostream>
#include <string>
#include <fstream>
#include "Pirates.h"
#include "Enemies.h"
#include "TreasureIsland.h"
#include <ctime>
using namespace std;


int split2 (string split, char seperator, string arr[], int size){       //to be called
    arr[size];
    if (split == ""){           //if the split is empty return 0
        return 0;
    }
    int z = 0;          //initializing variables
    int t = 0;
    while (split[t] == seperator){          //this makes it so that if it starts with seperators, it skips past them
          t++;
      }
    for (t; t < split.length(); t++){
     
        if(split[t] != seperator){          //if it is not a seperator, it adds it to the current array slot
            arr[z] += split[t];
        }
        if (split[t] == seperator && split[t+1] != seperator && t != split.length() - 1){       //if it is a seperator, the next slot is a character (not a seperator), and it is not the final slot
            z++;                            //then it moves to the next array
        }
    

    }
}


void TreasureIsland :: setEnemyAttributes()
{
    ifstream infile;
    infile.open("Enemies.txt");
    string line;
    string tempname;
    int temphealth;
    int tempendurance;
    int tempenemyDamage;
    int tempeyeSight;

    char seperator=',';
    string enemiesCharacteristics[5];
    int size=5;
    
    int numEnemies=0;
   
    // if(!infile.is_open())
    // {
       
    //     return -1;
    // }
   
    if(infile.is_open()){
       
   
        while(getline(infile, line))
        {
            if(line.length()>0)
            {
         
               
                split2(line, seperator, enemiesCharacteristics, size);
                tempname=enemiesCharacteristics[0];
                enemies.setName(tempname, numEnemies); //assighns name
                temphealth=stoi(enemiesCharacteristics[1]);
                enemies.setHealth(temphealth, numEnemies);  //assighns start health
                tempendurance=stoi(enemiesCharacteristics[2]);  
                enemies.setEnderance(tempendurance, numEnemies); //assins endurance
                tempenemyDamage=stoi(enemiesCharacteristics[3]);
                enemies.setEnemyDamage(tempenemyDamage, numEnemies);       //assigns damage
                tempeyeSight=stoi(enemiesCharacteristics[4]);
                enemies.setEyeSight(tempeyeSight, numEnemies);  //assigns eyeSight
                
                numEnemies++;                              
               
               
               
            }
            enemiesCharacteristics[0]="";
            enemiesCharacteristics[1]="";
            enemiesCharacteristics[2]="";
            enemiesCharacteristics[3]="";
            enemiesCharacteristics[4]="";
            temphealth=0;
            tempendurance=0;
            tempenemyDamage=0;
            tempeyeSight=0;

            if(numEnemies>=5)
                {
                    return;
                }

        }
    }
}


int TreasureIsland :: getEnemyHealthAt(int pos)
{
    
    return enemies.showHealth(pos);
    
}

string TreasureIsland :: getEnemyNameAt(int pos)
{
    
    return enemies.showName(pos);
}

int TreasureIsland :: getEnemyEyeSightAt(int pos)
{
    return enemies.showEyeSight(pos);
}

int TreasureIsland :: getEnemyEnduranceAt(int pos)
{
    return enemies.showEndurance(pos);
}

int TreasureIsland :: getEnemyDamageAt(int pos)
{
    return enemies.showEnemyDamage(pos);
}





void TreasureIsland :: setquitoption(int number){
    quitoption = number;
}

int TreasureIsland :: showquitoption(){
    return quitoption;
}

