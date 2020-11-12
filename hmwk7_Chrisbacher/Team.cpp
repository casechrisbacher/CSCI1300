//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 2

#include <iostream>
#include <string>
#include "Team.h"               
#include "Player.h"
#include <fstream>
using namespace std;


//=============================================SPLIT FUNCTION========================================================

int split (string split, char seperator, string arr[], int size){       //Split function to be used in ReadRoster
    arr[size];
    int commacount = 0;
    int stringcount = 0;
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

//==============================================Team class member function declarations=============================================================

Team :: Team()
{
    teamName = "";
    numPlayers = 0;
}

Team :: Team(string thisname)
{
    teamName = thisname;
    numPlayers = 0;
}

void Team :: setTeamName(string thisname)
{
    teamName = thisname;
}

int Team :: readRoster(string infile)
{
    int linecount = 0;
    int i = 0;
    string arr[2];
    int size = 2;
    string namearray[50];
    double points[50];
    string s;
    ifstream textfile;
    textfile.open(infile);
    
    if(textfile.is_open()){
        while(getline(textfile, s)){
            if ( s != ""){
                if (linecount < 50){        //For rosters that are larger than 50, it gets cutoff at the 50 mark
                    arr[0] = "";        //resets the two slots to blank strings
                    arr[1] = "";
                    split(s, ',', arr, size);     //splits each line of the roster
            
                    namearray[i] = arr[0];              //Puts names in namearray, and points in points array as doubles, at the same position
                    points[i] = stod(arr[1]);
            
                    players[i].setName(namearray[i]);       //Puts name and points into player array at same position
                    players[i].setPoints(points[i]);
            
            linecount++;
            i++;
                }
            }
        }
        numPlayers = linecount;
    textfile.close();
    }
    else {
        linecount = -1;
        
    }
    
    return linecount;           //returns total player count
}



string Team :: getPlayerName(int number)
{
    if (number < 0 || number >= numPlayers){        //if input is less than 0 or more than the roster count
        return "ERROR";
    }
    
    else{
        return players[number].getName();
    }
}

double Team :: getPlayerPoints(int number)
{
   if (number < 0 || number >= numPlayers){         //if input is less than 0 or more than the roster count
       return -1;
   }
   else{
        return players[number].getPoints();
   }
}

int Team :: getNumPlayers()
{
    return numPlayers;
}

string Team :: getTeamName()
{
    return teamName;
}



