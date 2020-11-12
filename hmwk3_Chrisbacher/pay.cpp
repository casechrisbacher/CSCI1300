//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 2

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float hoursworked;
    float payrate;
    float totalpay;
    float overtime;
    float totalpayplusovertime;
    
    cout<<"Enter the number of hours worked"<<endl;
    cin>>hoursworked;
    cout<<"Enter an hourly pay rate"<<endl;
    cin>>payrate;
    
    if (hoursworked <= 40 && hoursworked > 0 && payrate > 0)
    {
        totalpay = hoursworked*payrate;
        cout<<"Paycheck: ";
        cout<<setprecision(2)<<fixed<<totalpay<<endl;
    }
    
    if (hoursworked > 40 && payrate > 0)
    {
        totalpay = payrate*(float)40;                               //calculates pay for first forty hours
        overtime = (hoursworked - (float)40)*(payrate*(float)1.5);  //takes the forty hours out and calculates only overtime 
        totalpayplusovertime = totalpay + overtime;                 //establish that overtime is pay on top of the total forty hours
        cout<<"Paycheck: ";
        cout<<setprecision(2)<<fixed<<totalpayplusovertime<<endl;
    }
    if (hoursworked < 0 && payrate > 0)     //less than 0 hours is invalid
    {
        cout<<"Invalid input";
    }
    
    if (payrate < 0 && hoursworked > 0)     //less than 0 payrate is invalid
    {
        cout<<"Invalid input";
    }
    if (payrate < 0 && hoursworked < 0)     //both being less than 0 is invalid
    {
        cout<<"Invalid input";
    }
    return 0;
}