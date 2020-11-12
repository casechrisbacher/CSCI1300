//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 1
#include <iostream>
#include <string>
using namespace std;




int main(){
    double temps[10];
   
    int sequence[100];
    for (int i = 0; i < 10; i++){           //makes positions 1-9 = -459.67 and then prints them on dif rows
    temps[i] = (-459.67);
    cout<<temps[i]<<endl;
    }
    
    cout<<endl;
    
   string colors[5] = {"Red", "Blue", "Green", "Cyan", "Magenta"}; //creates string array
   
    for (int j = 0; j < 5; j++){            //prints string array
        cout<<colors[j]<<endl;
    }
    
    cout<<endl;
    
    for (int k = 0; k < 100; k++){              //creates array with 1-100
    sequence[k] = k + 1;
    cout<<sequence[k]<<endl;                    //prints whole array on dif rows
    }
    
    cout<<endl;
    
    char letters[100];                          //initialize character array
    int n = 65;
    for(int m = 0; m <= 58; m++){
       
        letters[m] = char(n);               //put characters into letters array, including the upper case ones
        n++;
}
    for(int x = 0; x < 26; x++ ){
        cout<<letters[x]<<" "<<letters[x + 32]<<endl;       //prints out lower case "space" upper case
    }
}