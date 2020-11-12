//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 1: Question 3

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


string toUpper(string inputword){
    string capitols;
    for (int i = 0; i < inputword.length(); i++)      
    {
    
         
            if (inputword[i] == 'a'){           //If statements for every single letter-- learned about ascii code table at recitation
                                                //Each line just converts the lowercase char to an uppercase
            capitols +=   'A';
            }
            
             if (inputword[i] == 'b'){
            capitols +=   'B';
            }
            
            if (inputword[i] == 'c'){
            capitols +=   'C';
            }
            
            if (inputword[i] == 'd'){
            capitols +=   'D';
            }
            
            if (inputword[i] == 'e'){
            capitols +=   'E';
            }
            
            if (inputword[i] == 'f'){
            capitols +=   'F';
            }
            
            if (inputword[i] == 'g'){
            capitols +=   'G';
            }
            
            if (inputword[i] == 'h'){
            capitols +=   'H';
            }
            
            if (inputword[i] == 'i'){
            capitols +=   'I';
            }
            
            if (inputword[i] == 'j'){
            capitols +=   'J';
            }
            
            if (inputword[i] == 'k'){
            capitols +=   'K';
            }
            
            if (inputword[i] == 'l'){
            capitols +=   'L';
            }
            
            if (inputword[i] == 'm'){
            capitols +=   'M';
            }
            
            if (inputword[i] == 'n'){
            capitols +=   'N';
            }
            
            if (inputword[i] == 'o'){
            capitols +=   'O';
            }
            
            if (inputword[i] == 'p'){
            capitols +=   'P';
            }
            
            if (inputword[i] == 'q'){
            capitols +=   'Q';
            }
            
            if (inputword[i] == 'r'){
            capitols +=   'R';
            }
            
            if (inputword[i] == 's'){
            capitols +=   'S';
            }
            
            if (inputword[i] == 't'){
            capitols +=   'T';
            }
            
            if (inputword[i] == 'u'){
            capitols +=   'U';
            }
            
            if (inputword[i] == 'v'){
            capitols +=   'V';
            }
            
            if (inputword[i] == 'w'){
            capitols +=   'W';
            }
            
            if (inputword[i] == 'x'){
            capitols +=   'X';
            }
            
            if (inputword[i] == 'y'){
            capitols +=   'Y';
            }
            
            if (inputword[i] == 'z'){
            capitols +=   'Z';
            }
            
          
          
            if (int(inputword[i] < 97 || inputword[i] > 122 )){     //These are all of the symbols in the ascii table
                capitols += inputword[i];
            }

        }
     return capitols;
    

}

int main(){
    string inputword;
    string capitols;
    cout<<"Enter the string: ";
    getline(cin, inputword);            //includes spaces in the string
    cout<<toUpper(inputword);           //outputs the function of all capitol letters
}