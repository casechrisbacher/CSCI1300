//CSCI 1300 Spring 2020
//Author: Case Chrisbacher and Phillip Gerharstein
//Section 106 - TA Sravanth Yajamanam
//Project 3 Treasure Island

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstddef>
#include "Pirates.h"
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

int split (string split, char seperator, string arr[], int size){       //to be called
    arr[size];
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
}

void Pirates :: setherohealth(int inputhealth)
{
    herohealth = inputhealth;
   
}

void Pirates :: setspeed(int inputspeed)
{
    speed = inputspeed;
}

void Pirates :: setcamo(int inputcamo)
{
    camo = inputcamo;
}

void Pirates :: setstrength(int inputstrength)
{
    strength = inputstrength;
}


void Pirates :: choosecharacter(string userinput)
{
    ifstream text;
    string s;
    char seperator = ',';
    int size = 6;
    string arr[size];
    int characterexists = 0;
    text.open("Pirates.txt");
    if (text.is_open()){
        while (getline(text, s)){
            if (s != ""){
                for (int m = 0; m < 6; m++){  //intializes the arr[] as blank
                arr[m] = "";
                }
            split(s, seperator, arr, size);
       if (toUpper(userinput) == toUpper(arr[0])){
           characterexists++;
           character = arr[0];
          
           setherohealth(stoi(arr[1]));
          
           setspeed(stoi(arr[2]));
           setstrength(stoi(arr[3]));
           setcamo(stoi(arr[4]));
    
           cout<<"Great Choice!"<<endl;
       }
   
            }
        }
   
   
    }
    if (characterexists == 0){
        cout<<"Please enter a valid character."<<endl;
    }

   
   
}

int Pirates :: herodamagecall(){
    int randomnumber = time(NULL) % 10; //gives random multiplier for damage 
    herodamage = ((strength + speed)/4)*(randomnumber);
    return herodamage;
}

int Pirates :: getHeroCamo()
{
    return camo;
}

int Pirates :: getHeroSpeed()
{
    return speed;
}

int Pirates :: showherohealth()
{
    
    return herohealth;
}