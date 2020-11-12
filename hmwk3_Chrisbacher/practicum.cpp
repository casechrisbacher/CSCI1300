//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 1

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int practicumonescore;
    int practicumtwoscore;
    int practicumthreescore;
    double practicumaverage;
    
    cout<<"Enter practicum 1 score:"<<endl;     //enter each score
    cin>>practicumonescore;
    cout<<"Enter practicum 2 score:"<<endl;
    cin>>practicumtwoscore;
    cout<<"Enter practicum 3 score:"<<endl;
    cin>>practicumthreescore;
    
    practicumaverage = (double)(practicumonescore+ practicumtwoscore+ practicumthreescore)/(double)3; //average is the tests added up divided by 3
    cout<<"Practicum average: ";
    cout<<setprecision(2)<<fixed<<practicumaverage<<endl;                   //sets two decimal
    
    if (practicumaverage >= 67)                 //establishes passing score
        {
            cout<<"You have a passing practicum average.";
        }
    else {cout<<"You can retake practicums during the final.";
    }
    
    
    return 0;
}