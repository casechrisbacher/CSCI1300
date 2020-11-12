//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 5

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    string searchstring;
    string substring;
    int totalcases = 0;
    
    cout<<"Enter the search string:"<<endl;
    cin>>searchstring;
    cout<<"Enter the substring to be searched:"<<endl;
    cin>>substring;
    for (int i=0; i < searchstring.length(); i++){
        if(searchstring[i] == substring[0]){

            if( searchstring.substr(i,substring.length()) == substring){ //starts from beginning of where string is found in the search and compares it to the string
                totalcases++;
            }
  
                
               }
            

        
          
    }
    cout<<"Number of occurrences: "<<(totalcases);
}
