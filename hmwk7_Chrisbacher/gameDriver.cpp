//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 3

#include <iostream>
#include <string>
#include "Team.h"
#include "Player.h"
#include <fstream>
using namespace std;

string game(Team one, Team two){
    double totalpointsone;
    double totalpointstwo;
    if(one.getNumPlayers() < 4 || two.getNumPlayers() < 4){
        return "forfeit";
    }
    for (int i = 0; i < 4; i++){
        totalpointsone += one.getPlayerPoints(i);       //adds up first four points into one team score
        totalpointstwo += two.getPlayerPoints(i);
        
    }
    if (totalpointsone == totalpointstwo){      //if theyre even its a draw
        return "draw";
    }
    
    if (totalpointsone > totalpointstwo){       //winners
        return one.getTeamName();
    }
    else{
        return two.getTeamName();
    }
}

int main(){
    Team suns1("Phoenix Suns");
    suns1.readRoster("roster.txt");
    
    Team heat1("Miami Heat");
    heat1.readRoster("miamiheat.txt");
    
    string winner1 = game(suns1, heat1);
    cout << "The winner is: " << winner1 << endl;  //expect The winner is: Phoenix Suns
    

    
    Team suns2("Phoenix Suns");
    suns2.readRoster("roster.txt");
    
    Team rappers1("Rappers");
    rappers1.readRoster("rappers.txt");
    
    string winner2 = game(suns2, rappers1);
    cout << "The winner is: " << winner2 << endl;        //expect The winner is: draw
    
    
    
    Team suns3("Phoenix Suns");
    suns3.readRoster("roster.txt");
    
    Team team2("One Player Short");
    team2.readRoster("notenough.txt");
    
    string winner3 = game(suns3, team2);
    cout << "The winner is: " << winner3 << endl;        //expect The winner is: forfeit
    
    //got all expected winners
}