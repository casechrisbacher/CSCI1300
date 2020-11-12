//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 5

#include <iostream>
using namespace std;

int main(){
    int year;
    int month;
    cout<<"Enter a year:"<<endl;
    cin>>year;
    cout<<"Enter a month:"<<endl;
    cin>>month;
    
    if(month <= 0 || month > 12){          //invalid if month isn't 1-12
        cout<<"Invalid month";
    }

    switch(month){
        case 1:     //January
        cout<<"31";
        cout<<" days";
        break;
        
        case 2:     //Februaary
        
        if (year % 2 != 0 ){         //if the year is not divisible by 2 its NOT a leap year
        cout<<"28";
        }
        if (year < 1582 && year % 4 == 0){     //if it is before 1582 and divisible by 4 it is not a leap year
        cout<<"29";
        }
        if (year > 1582 && year % 400 == 0){     //If it is past 1582 and divisible by 400 it is a leap year
        cout<<"29";
        }
        if (year > 1582 && year % 100 == 0 && year % 400 != 0){     //If it is past 1582 and divisible by 100 but not 400 then it is not a leap year
        cout<<"28";
        }
        if (year > 1582 && year % 100 != 0 && year % 400 != 0 && year % 4 == 0){     //If it is past 1582 and is not divisble by 100 or 400 but is by 4 then it is a leap year
        cout<<"29";
        }
        if(year % 4 != 0 && year % 2 == 0){                                          //if it is divisible by 2 but not four it is a reg year
        cout<<"28";
        }
        cout<<" days";
        break;
        
        case 3:     //March
        cout<<"31";
        cout<<" days";
        break;
        
        case 4:     //April
        cout<<"30";
        cout<<" days";
        break;
        
        case 5:     //May
        cout<<"31";
        cout<<" days";
        break;
        
        case 6:     //June
        cout<<"30";
        cout<<" days";
        break;
        
        case 7:     //July
        cout<<"31";
        cout<<" days";
        break;
        
        case 8:     //August
        cout<<"31";
        cout<<" days";
        break;
        
        case 9:     //September
        cout<<"30";
        cout<<" days";
        break;
        
        case 10:        //October
        cout<<"31";
        cout<<" days";
        break;
        
        case 11:        //November
        cout<<"30";
        cout<<" days";
        break;
        
        case 12:        //December
        cout<<"31";
        cout<<" days";
        break;
    
    }
        return 0;
        
}