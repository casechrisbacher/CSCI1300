//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 4

#include <iostream>
#include <string>
using namespace std;

int maxSum(int integerarray[][10], int numberofrows){       
    integerarray[numberofrows][10];
    int totalmaxvalue = 0;
    int maxvalue;
    for (int i = 0; i < numberofrows; i++){
         maxvalue = integerarray[i][0];     //establishes max value per row, as the first value
        for(int j = 0; j < 10; j++){
            if (integerarray[i][j] > maxvalue){ //if the next value is larger then the last then it is the new largest number
                maxvalue = integerarray[i][j];
            }
            
            
        }
         totalmaxvalue = totalmaxvalue + maxvalue;          //adds max value of each row once it is done going through row
    }
        return totalmaxvalue;
    }

int main (){
    int numberofrows;
    int numbers;
    
    cout<<"enter number of rows"<<endl;
    cin>>numberofrows;
    int integerarray[][10];
    cout<<"Enter matrix"<<endl;
   for (int i = 0; i < numberofrows; i++){
       for (int j = 0; j < 10; j++){
       cin>>numbers;
       integerarray[i][j] = numbers;
       }
   }
        
    
   cout<<maxSum(integerarray[][10], numberofrows);
    
}