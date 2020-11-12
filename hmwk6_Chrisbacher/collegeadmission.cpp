//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 6: Question 3

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

int split (string inputfilename, char seperator, string arr[], int size, string all){
    ifstream textfile;
    int z = 0;
    textfile.open(inputfilename);
    if(textfile.is_open()){
    while (getline(textfile, all)){
   
    
    seperator = ',';

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
 

    
}
    textfile.close();
    return z;
}

main(){
    ifstream textfile;
    string inputfilename;
    char seperator;
    string arr[500];
    int linecount = 0;
    int size;
    string all;
    cout<<"Enter the file name:"<<endl;
    cin>>inputfilename;
    
    textfile.open(inputfilename);           
    if (textfile.is_open()){
        for (int i = 0; i < 500; i++){          //linecounter without spaces
            if (getline(textfile, all)){
            if (all != ""){
            linecount++;
            }
        }
       
    
    }
    
    split (inputfilename, seperator, arr, size, all);
    
}
else {
    cout<<"Could not open file.";
    return 1;
}
textfile.close();
        cout<<endl;
        cout<<"Results:"<<endl;             //reads the people as the ninth box of the array, and then uses their infomation by converting it to integers in the 8 boxes that come after their name
   for (int n = 9; n < linecount*9; n++){

    double overallscore = (stod(arr[n+2]))*((double).8)+(double)(stod(arr[n+1]))*(double)(.3/160)+(stod(arr[n+3]))*(double)(.1)+(stod(arr[n+4]))*(double)(.2);
    
    
                                        //these determine the word output after the calculation is done
    cout<<arr[n]<<","<<overallscore;
   if(overallscore >= 6 || stod(arr[n+8]) > stod(arr[n+7]) && stod(arr[n+7]) > stod(arr[n+6]) && stod(arr[n+6]) > stod(arr[n+5]) && overallscore > 5 || stod(arr[n+3]) == 0 && overallscore >= 5 || stod(arr[n+2])*((double)2) > (double)(stod(arr[n+1]))/(double)(160) + 2 && overallscore >= 5){
    if (overallscore >= 6){
        cout<<","<<"score"<<endl;
    }
    if (stod(arr[n+8]) > stod(arr[n+7]) && stod(arr[n+7]) > stod(arr[n+6]) && stod(arr[n+6]) > stod(arr[n+5]) && overallscore > 5 && overallscore < 6){
        cout<<",grade improvement"<<endl;
    }
    
    if (stod(arr[n+3]) == 0 && overallscore >= 5 && overallscore < 6){
        cout<<","<<"outlier"<<endl;
    }
    if (stod(arr[n+2])*((double)2) > (double)(stod(arr[n+1]))/(double)(160) + 2 && overallscore >= 5 && overallscore < 6){
        cout<<","<<"outlier"<<endl;
    }
   }
    else{           //for individuals with who didnt make it.
       
        cout<<endl;
        
    }
    
     n = n+8;
}














}