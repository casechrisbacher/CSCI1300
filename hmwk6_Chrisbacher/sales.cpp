//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework : Question 2
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cctype>
using namespace std;

int readSales(string storage, string names[], int sales[][12], int size){
    int z = 0;
    int p = 0;
    string arr[500];                //initializing
    string names[size];
    
    ifstream nameoffile;
    string newfile = "";
    int k = 0;
    
    nameoffile.open(storage);
    if (nameoffile.is_open()){
    while (getline(nameoffile, newfile)){
    
    if (newfile == ""){           //if the inputfilename is empty return 0
        continue;
    }
    
    for (int i = 0; i < 10; i++){
    if (isalpha(newfile[i])){       //creates words with the array characters
        names[k] += newfile[i];
        
    }
    
  
    }
  if (!isalpha(newfile[0])){        //takes k away for the amount of words if it is a number
      k--;
  }
    
    k++;
    
    
    for (int b = 0; b < k; b++){        //initializes at 0
        for (int c = 0; c < 12; c++){
        sales[b][c] = 0;
        }
    }
    
    char seperator = ',';

  
    if (newfile == ""){           //if the inputfilename is empty return 0
        continue;
    }
              //initializing variables
    int t = 0;
    while (newfile[t] == seperator){          //this makes it so that if it starts with seperators, it skips past them
          t++;
      }
    for (t; t < newfile.length(); t++){
     
        if(newfile[t] != seperator){          //if it is not a seperator, it adds it to the current array slot
            arr[z] += newfile[t];
        }
        if (newfile[t] == seperator){       //if it is a seperator, the next slot is a character (not a seperator), and it is not the final slot
            z++;                            //then it moves to the next array
        }
                                                

    }
  
    z++;
    }
    int u = 0;
    while (u < k){
  
    for (int m = 0; m < 12 ; m++){              //controls the rows position in the row
       
        if (m + 1 % 13 != 0){                   //this is the position of the words
        
           sales[u][m] = stoi(arr[(int)m + 1 + u*13]); //prints out every number for a row, and then goes up 13 when it finishes
        
        }
        else {
            m++;
             u++;
        }
    
    
    
    }
      u++;
    }
    
  

    
    
    return k+2;
    
   
     
    }
    else {
        return -1;
    }
    
    
    
    nameoffile.close();                             //always close your functions
}