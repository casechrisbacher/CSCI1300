//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 2: Question 7

#include <iostream>
using namespace std;

int main(){
    int uspopulation;
    int populationafteryear;
    int seconds;
    seconds = 60*60*24*365;  //total seconds in a year
    int births = seconds/8;
    int deaths = seconds/12;
    int immigrants = seconds/27;
    cout<<"Enter the current population:"<<endl;
    cin>>uspopulation;
    populationafteryear = uspopulation + births - deaths + immigrants;
    cout<<"The population in one year: ";
    cout<<populationafteryear;
}