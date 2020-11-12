//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void stats (double array[100], int amount){
    double value;
    for (int i = 0; i < 3; i++){            //doesnt matter what i goes up to becaues array is added on one line
    cin>>array[i];
    }
    cin>>amount;
 
  
    
    
    
    double minimum = array[0];              //establishes minimum value
    for (int k = 1; k < amount; k++){
        if (array[k] < minimum){                //if the next value is smaller, it is now the min
            minimum = array[k];
        }
        
    }
cout<<"Min: "<<setprecision(2)<<fixed<<(double)minimum<<endl;


    double maximum = array[0];          //establish max
    for (int l = 1; l < amount; l++){
        if (array[l] > maximum){            //if next is larger, new max
            maximum = array[l];
        }
        
    }
cout<<"Max: "<<setprecision(2)<<fixed<<(double)maximum<<endl;

    double average = 0;
    for(int x =0; x < amount; x++){
    average = average + array[x];           //adds all together
    
    }
    average = average/(amount);         //divides it by total amount
    cout<<"Avg: "<<setprecision(2)<<fixed<<average;
}



int main(){

    int amount;
    double array[amount];
    stats( array,  amount);
}