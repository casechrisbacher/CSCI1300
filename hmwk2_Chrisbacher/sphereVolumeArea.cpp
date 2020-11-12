//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 2: Question 4

#include <iostream>
#include <cmath>
using namespace std;

//prints the volume and surface area of a sphere with inputted radius

int main(){
    double radius;
    double volume;
    double surfacearea;
    double fourthirds;
    fourthirds = (double)4/3;
    cout<<"Enter a radius:"<< endl;
    cin>>radius;
    volume = pow(radius,3)*(fourthirds)*(M_PI);
    surfacearea = pow(radius,2)*4*M_PI;
    cout<<"Volume: ";
    cout<<volume<< endl;
    cout<<"Surface area: ";
    cout<<surfacearea<< endl;
    
    return 0;
}