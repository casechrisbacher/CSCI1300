//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 1: Question 2

#include <iostream>
#include <cmath>
using namespace std;

double displacement(double Initialvelocity, double Finalvelocity, double Deceleration){        //I = Initial Velocity; F = Final velocity; a = Deceleration
    double displacedby = (double)((pow(Finalvelocity,2) - (pow(Initialvelocity,2)))/(double)(-2*Deceleration));
    
    if (Initialvelocity < 0 || Finalvelocity < 0 || Deceleration == 0 || Deceleration < 0 || Finalvelocity > Initialvelocity){
      
    if (Initialvelocity < 0 || Finalvelocity < 0){
        cout<<"Velocity should be greater than zero."<<endl;
    }
    if (Deceleration == 0){
        cout<<"No brakes were applied."<<endl;
    }
    if (Deceleration < 0){
        cout<<"The vehicle is speeding up."<<endl;
    }
    if (Finalvelocity > Initialvelocity){
        cout<<"Error in acceleration values."<<endl;
    }
    return 0;
    
}
    
    return displacedby;
}

int main(){
    double Initialvelocity;
    double Finalvelocity;
    double Deceleration;
    
    cout<<"Enter initial velocity: ";
    cin>>Initialvelocity;
    cout<<"Enter final velocity: ";
    cin>>Finalvelocity;
    cout<<"Enter deceleration: ";
    cin>>Deceleration;
  
    
    double finaldisplacement = displacement(Initialvelocity, Finalvelocity, Deceleration);
    cout<<"Displacement is "<<finaldisplacement;
}