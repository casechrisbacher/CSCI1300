//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 6: Question 1

#include <iostream>
#include <string>
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


int main(){
    ifstream textfile;
    int linecount = 0;
    char seperator;
    string mainarr[500];
    double maximum;
    double minimum;
    int size;
    string all = "";
    string inputfilename;
    cout<<"Enter the file name:"<<endl;
    cin>>inputfilename;
    textfile.open(inputfilename);
    if (textfile.is_open()){
        for (int i = 0; i < 500; i++){
            if (getline(textfile, all)){        //line counter
            if (all != ""){
            linecount++;
            }
        }
       
    
    }
    
        
    all = "";
    
    split( inputfilename,  seperator,  mainarr,  size, all);     
    
    cout<<"The number of lines: "<<linecount<<endl;
 
  
    maximum = stod(mainarr[1]);     //sets first in main array as the largest and then compares it to others
    
    for (int i =3; i < linecount+1; i++){
        
        if (stod(mainarr[i]) > maximum){
        maximum = stod(mainarr[i]);
    }
    i++;
    }
    
    for (int l = 1; l < linecount+1; l++){
        if (maximum == stod(mainarr[l])){
            cout<<"The most expensive product: "<<mainarr[l-1]<<endl;       //wants what the product is called so it prints out right in front of max
            l = linecount +1;
        }
        l++;
    }
    
    minimum = stod(mainarr[1]);         //sets first to min, compares to others
    
    for (int i =3; i < linecount+1; i++){
        
        if (stod(mainarr[i]) < minimum){
        minimum = stod(mainarr[i]);
    }
    i++;
    }
    
    for (int l = 1; l < linecount+1; l++){
        if (minimum == stod(mainarr[l])){
            cout<<"The least expensive product: "<<mainarr[l-1];         //prints out product name
           l = linecount +1;
        }
        l++;
    }
    
    textfile.close();
    }
    else {
        cout<<"Could not open file.";
    }
    

}