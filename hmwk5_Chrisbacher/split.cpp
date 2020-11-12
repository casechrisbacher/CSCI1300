//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 6

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int split (string split, char seperator, string arr[], int size){
    arr[size];
    int commacount = 0;
    int stringcount = 0;
    if (split == ""){           //if the split is empty return 0
        return 0;
    }
    int z = 0;          //initializing variables
    int t = 0;
    while (split[t] == seperator){          //this makes it so that if it starts with seperators, it skips past them
          t++;
      }
    for (t; t < split.length(); t++){
     
        if(split[t] != seperator){          //if it is not a seperator, it adds it to the current array slot
            arr[z] += split[t];
        }
        if (split[t] == seperator && split[t+1] != seperator && t != split.length() - 1){       //if it is a seperator, the next slot is a character (not a seperator), and it is not the final slot
            z++;                            //then it moves to the next array
        }
    

    }
    for(int i = 0; i < split.length(); i++){            //this outputs negative one if the ammount of seperators is larger than the ammount of arrays
        if (split[i] == seperator){
            commacount++;
        }
        if (commacount > size){
            return -1;
        }
    }
    return z+1;
}

main(){
    
}