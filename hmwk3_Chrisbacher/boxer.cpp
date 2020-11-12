//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 4
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int boxerone;
    int boxertwo;
    int boxerthree;
    
    cout<<"Enter boxers' weights"<<endl;
    cin>>boxerone>>boxertwo>>boxerthree;        //Enter boxer weights in order
    
    if (boxerone > boxertwo && boxertwo > boxerthree) 
    {
        cout<<"Descending order";
    }
    else
    {
    
    if (boxerthree > boxertwo && boxertwo > boxerone)
    {
        cout<<"Ascending order";
    }
    else{
        cout<<"Neither";
    }
    }
}