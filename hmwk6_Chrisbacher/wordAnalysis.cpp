//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 6: Question 4

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;





int split (string inputfilename, char seperator, string arr[], int size, string all){       //splits the line into words
    ifstream textfile;
    int z = 0;
    textfile.open(inputfilename);
    if(textfile.is_open()){
    while (getline(textfile, all)){
   
    
    seperator = ' ';

    int commacount = 0;
    int stringcount = 0;
    if (all == ""){           //if the inputfilename is empty return 0
        continue;
    }
              //initializing variables
    int t = 0;
    while (all[t] == seperator){          //this makes it so that if it starts with seperators, it skips past them
          t++;
      }
    for (t; t < all.length(); t++){
     
        if(all[t] != seperator){          //if it is not a seperator, it adds it to the current array slot
            arr[z] += all[t];
        }
        if (all[t] == seperator){       //if it is a seperator, the next slot is a character (not a seperator), and it is not the final slot
            z++;                            //then it moves to the next array
        }
                                                   

    }
  

    z++;
    }
 
                                                //then after this i would go into individual characters and compare them to the other strings
                                                //this would allow me to know which is the same length and output when they are the same length
    
}
    textfile.close();
    return z;
}

int wordcount (string inputfilename, int wordcounter, int unique, int total){
    textfile.open(inputfilename);
    if (textfile.is_open()){
        for (int i = 0; i < 50; i++){
            
        }
        
        
        
        
        
        
        
        
        
    }
    
    
    
}




int main(){
    ifstream textfile;
    string inputfilename;
    int size;
    int arr[500];           //initializes
    char seperator;
    string all = "";
    int n;
    cout<<"Enter a filename:"<<endl;
    cin>>inputfilename;
    textfile.open(inputfilename);
    if (textfile.is_open()){
        cout<<"Enter the value of n:"<<endl;
        cin>>n;
        getline(textfile, all);
        split (inputfilename, seperator, arr, size, all);
    
    }
    else{
        cout<<"Could not open the file.";           //backup if the function does not open
        return 1;
    }
    textfile.close();
    
}