//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 4

#include <iostream>
using namespace std;

int main(){
    double savings = 0;                 //Savings is 0
    double annualrate = .04/12;         //Interest on savings per month
    double annualsalary;
    double salarysaved;
    double dreamhouseprice;
    double downpayment;
    double month = 0;
    
    cout<<"Enter your annual salary:"<<endl;
    cin>>annualsalary;
    cout<<"Enter the percent of your salary to save, as a decimal:"<<endl;
    cin>>salarysaved;
    cout<<"Enter the cost of your dream home:"<<endl;
    cin>>dreamhouseprice;
    
    downpayment = dreamhouseprice*(double).25;              //Down payment is 25% of the total price
    
    while (savings < downpayment){
        savings += (annualrate)*savings + (double)(salarysaved)*(annualsalary/12);      //Interest on current savings + fraction of savings saved times how much they make a month
        month = month + 1;                                                              //month increases by one per cycle
        
        
    }
    
    cout<<"Number of months: ";
    cout<<month;
    
    
    
    
    
}