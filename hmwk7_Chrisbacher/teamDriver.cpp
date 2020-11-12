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




int main(){

    Team one;
    cout<<one.getTeamName()<<endl;      //expect ""
    cout<<one.getNumPlayers()<<endl;    //expect 0
    
    
    Team two("Phoenix Suns");
    cout<<two.getTeamName()<<endl;      //expect Phoenix Suns
    cout<<two.readRoster("roster.txt")<<endl; //expect 7
    cout<<two.getPlayerName(4)<<endl;    //expect DevinBooker
    cout<<two.getPlayerPoints(4)<<endl;  //expect 70
    
    Team three;
    three.setTeamName("PHXSUNS");    
    cout<<three.getTeamName()<<endl;      //expect PHXSUNS
    cout<<three.readRoster("roster.txt")<<endl; //expect 7
    cout<<three.getPlayerName(10)<<endl;    //expect ERROR
    cout<<three.getPlayerPoints(-1)<<endl;  //expect -1

}