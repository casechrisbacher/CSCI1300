//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 1

#include <iostream>
using namespace std;

int main(){
    int number;
    const int two = 2;                          //constant integer 2
    int sum = 0;                                //Initializes su,
    cout<<"Enter a positive number:"<<endl;
    cin>>number;
    
    if (number % 2 == 0){                       //If the number is even
    
    while (number > 0)
    {
        
         sum += (number);                       //Total summation of the number variable
         number = (number - two);               //Number decreases by two everytime it is looped
    }
    }
    
    if (number % 2 != 0){
        number = number -1;                     //Same type of code, just reduces odd numbers to the even number below it
        while (number > 0)
        {
        
        sum += (number);
         number = (number - two);
        }
    }
    cout<<"Sum: "<<sum;
    
    return 0;
    
    
    
    
    
}