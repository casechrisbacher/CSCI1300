//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 2

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a positive number:"<<endl;
    cin>>number;
    
    while (number != 1){            //Prints until loop equals one
        cout<<number<<endl;
        if (number % 2 == 0){           //Even numbers are divided by 2
            number = number / 2;
        }
        else{
            number = 3*number + 1;      //All other (odd) numbers are multiplied by 3 and added to 1
        }
        
        
    }
            cout<<"1";                  //Since the loop does not include 1 and Collatz sequeces do, I simply printed 1 at the bottom
}