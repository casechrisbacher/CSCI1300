//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 2: Question 3

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int coldtemperature;
    int hottemperature;
    cout <<"Enter cold reservoir temperature:" <<endl;
    cin>>coldtemperature;
    cout<<"Enter hot reservoir temperature:" <<endl;
    cin>>hottemperature;
    cout<<"Carnot efficiency: ";
    double carnotefficiency = 1 - ((double)coldtemperature/(double)hottemperature);
    cout<<carnotefficiency<<endl;
    
    return 0;
}