//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 1

#include <iostream>
#include "Player.h"
using namespace std;

int main(){

    Player one;
    cout<<one.getName()<<endl;      //expect ""
    cout<<one.getPoints()<<endl;    //expect 0
    
    
    Player two("Felicia", 10);
    cout<<two.getName()<<endl;      //expect Felicia
    cout<<two.getPoints()<<endl;    //expect 10
    
    Player three;
    three.setName("RonBurgandy");    
    three.setPoints(100000);         
    cout<<three.getName()<<endl;        //expect RonBurgandy
    cout<<three.getPoints()<<endl;      //expect 100000


    //I got all expected values
}
