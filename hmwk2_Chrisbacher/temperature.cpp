//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 2: Question 5

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double fahrenheit;
    double celsius;
    cout<<"Enter a temperature in Fahrenheit:"<< endl;
    cin>>fahrenheit;
    cout<<"The temperature ";
    cout<<fahrenheit; 
    cout<<" degrees Fahrenheit is "; 
    celsius = ((double)5/9)*((double)fahrenheit-32);
    cout<<fixed<<setprecision(2)<<celsius; 
    cout<<" degrees Celsius."<< endl;
    
    return 0;
}