//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 2: Question 6

#include <iostream>
using namespace std;

int main(){
    int hour;
    int minute;
    int secondsin;
    int secondsleft;
    cout<<"Enter a number of seconds:"<< endl;
    cin>>secondsin;
    hour = secondsin/3600;
    minute = (secondsin - (hour*3600))/60;
    secondsleft = secondsin - hour*3600 - minute*60;
    cout<<hour;
    cout<<" hour(s) ";
    cout<<minute;
    cout<<" minute(s) ";
    cout<<secondsleft;
    cout<<" second(s) ";
    
    return 0;
    
}