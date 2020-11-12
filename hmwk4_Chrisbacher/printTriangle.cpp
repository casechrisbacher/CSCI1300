//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 6

#include <iostream>
#include <string>
using namespace std;

int main(){
    string abc = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
                    //allows for enought characters
    int linecount;
    int start = 0;
    int number = 6;
    string substring;
    cout<<"Enter the height:"<<endl;
    cin>>linecount;
    
    for (int i = 0; i <= linecount; i++){
        if (i = 0){
             cout<<abc.substr(0,linecount)<<endl;
        }
        else{
        cout<<abc.substr(start,linecount--)<<endl;
        start += linecount+1; //makes sure it starts at next letter
        number += linecount-1; //one less letter per line
        }
        
        
        
   
    }
    
}