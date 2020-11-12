//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#include "Library.h"
#include "User.h"
#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//--------------------------------------------LIBRARY.CPP-----------------------------------------------------------------

//--------------------------------------------Split-----------------------------------------------------------------

int split (string split, char seperator, string arr[], int size){       //to be called
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
}
//-------------------------------------------TOUPPER------------------------------------------
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

//-------------------------------------------LIBRARY-------------------------------------------------


Library :: Library()
{
    numBooks = 0;
    numUsers = 0;
}

int Library :: getNumBooks()
{
    return numBooks;
}

int Library :: getNumUsers()
{
    return numUsers;
}

int Library :: readBooks(string inputfilename)
{
    ifstream textfile;
    string s;
    char seperator = ',';
    int size = 2;
    string arr[size];
    int numBooks = 0;
    textfile.open(inputfilename);
    if (textfile.is_open()){
        while (getline(textfile, s)){
            if (s != "" && numBooks < 50){
                arr[0] = "";                        //sets the two slots of arr[] to blank
                arr[1] = "";
                
                split(s, seperator, arr, size);     //splits the texfile into author and title
                books[numBooks].setAuthor(arr[0]);      //places author in books array
                books[numBooks].setTitle(arr[1]);       //places title in books array in the same slot
                
                numBooks++;
            }
        }
        if (numBooks > 50){     
            numBooks = 50;
        }
        return numBooks;
        
    }
    else{
        return -1;
    }
}



int Library :: readRatings(string infile)
{
    ifstream text;
    string s;
    char seperator = ',';
    int size = 100;
    string arr[size];
    int linecount = 0;
    int k = 0;
    text.open(infile);
    if (text.is_open()){
        while (getline(text, s)){
            if (s != "" && k < 100){
            for (int m = 0; m < 100; m++){          //intializes the arr[] as blank
                arr[m] = "";
            }
            
            split(s, seperator, arr, size);
                if (linecount == 0 || linecount % 2 == 0){      //the names are on the very first line and then every other
                    users[k].setUsername(arr[0]); 
                    
                }
                else{
                    for(int l = 0; l < numBooks; l++){          //It goes through all of the ratings, and there is a total number which is numBooks
                        users[k].setRatingAt(l, stoi(arr[l])); 
                    }
                    k++;
                }
                linecount++;
                
            }
        }
        numUsers += k;
        if(numUsers > 100){
            numUsers = 100;
        }
        return numUsers;
    }
    else {
        return -1;
    }
    
}


void Library :: viewRatings(string username, int minrating)
{
    int x = 0;
    int gotin = 0;

    
        if(numUsers == 0 || numBooks == 0){
            cout<<"The library has not been fully initialized."<<endl;
            return;
                }
                
    
        for(int f = 0; f < 100; f++){
        if(toUpper(users[f].getUsername()) == toUpper(username)){       //comparing the capitol version of each because its not case sensitive
            gotin++;
            for(int i = 0; i <= numBooks; i++){
                int currentvalue = 0;
                currentvalue = users[f].getRatingAt(i);         

                    if (currentvalue >= minrating){                     //if the current spots value is greater than the min rating, it prints the book
                        if(x == 0){
                            cout<<"Here are the books that "<<username<<" rated"<<endl;     //this was used to ensure that the title was only printed when they existed
                            cout<<"Title : "<<books[i].getTitle()<<endl;
                            cout<<"Rating : "<<users[f].getRatingAt(i)<<endl;
                            cout<<"-----"<<endl;
                            x++;
                           
                        }
                        else{
                            cout<<"Title : "<<books[i].getTitle()<<endl;            //the "here are the books.." no longer needs to be printed per book
                            cout<<"Rating : "<<users[f].getRatingAt(i)<<endl;
                            cout<<"-----"<<endl;
                        }
                 
                    
                    }
            
                
            }
        }
    
        }
        if(x == 0 && gotin != 0){                           //got in ensured that the username exists, and x==0 means that the counter x was not increased by having a value higher than the min
                cout<<username<<" has not rated any books with "<<minrating<<" or higher."<<endl;
            }
        if(gotin == 0){
            cout<<username<<" does not exist."<<endl;           //the gotin counter was not increased because the input name never matched a username
        }
    
}

void Library :: printAllBooks()
{
    double average = 0;
    double timesrated = 0;
    
    if (numBooks == 0 || numUsers == 0){
        cout<<"The library has not been fully initialized."<<endl;
        return;
        
    }
    
    
    for(int k = 0; k < numBooks; k++){
        for(int i = 0; i < numUsers; i++){
            average += users[i].getRatingAt(k);             //adding up all of the ratings for all of the users, for one book at a time
            if(users[i].getRatingAt(k) != 0){
                timesrated++;
            }
        }
        average = average / timesrated;                     //divides it by the timesrated counter, which exludes anytime the user has not rated a book
        cout<<"("<<fixed<<setprecision(2)<<average<<") "<<books[k].getTitle()<<" by "<<books[k].getAuthor()<<endl;
        average = 0;                                        //resets the values to 0
        timesrated = 0;
    }
}


void Library :: addUser(string newuser)
{
    for(int f = 0; f < 100; f++){
        if(toUpper(users[f].getUsername()) == toUpper(newuser)){
            cout<<newuser<<" already exists in the library."<<endl;
            return;
        }
        
    }
    
    if(numUsers < 100){                             //ensure that it does not exceed the size of the array
        users[numUsers].setUsername(newuser);       //puts new user at index numUsers which will be the next slot
        for(int c; c < numBooks; c++){          //sets all of the ratings for this user to 0
            users[numUsers].setRatingAt(c, 0);
        }
        cout<<"Welcome to the library "<<newuser<<endl;
        numUsers++;                             //increases the numUsers by one because one was just added
    }
    else{
        cout<<"The library is already full. "<<newuser<<" was not added."<<endl;
    }
}

void Library :: updateRating(string username, string whichbook, int newrating)
{
    int userexists = 0;
    int bookexists = 0;
    if (numBooks == 0 || numUsers == 0){
        cout<<"The library has not been fully initialized."<<endl;
        return;
    }
    
    
    for(int f = 0; f < 100; f++){
        if(toUpper(users[f].getUsername()) == toUpper(username)){               //case insensitive comparison
            userexists++;
            for(int t = 0; t < 50; t++){
                if(toUpper(books[t].getTitle()) == toUpper(whichbook) && newrating >= 0 && newrating <= 5){     //if there is a book that is the same as the input 
                    bookexists++;                                                                               //and the rating is from 0-5
                    users[f].setRatingAt(t , newrating);                                                        //that rating is updated
                    cout<<"The rating has been updated."<<endl;
                    return;
                }
            
            }
            
        }
    }
    if(userexists == 0){                                                            //userexists increases when it gets past the username if statement
        cout<<username<<" does not exist."<<endl;
        return;
    }
    if (newrating < 0 || newrating > 5){                                            //out of bounds rating
        cout<<newrating<<" is not valid."<<endl;
        return;
    }
    if(bookexists == 0){                                                            //bookexists increases when the input book is found in the books array
        cout<<whichbook<<" does not exist."<<endl;
        return;
    }
}


void Library :: getRecommendations(string user)
{
    int rating[50];
    int userindex;
    int min = 1000000;
    int nonzero;
    int arating = 0;
    int inputindex = 0;
    int userexists = 0;
    if (numBooks == 0 || numUsers == 0){
        cout<<"The library has not been fully initialized."<<endl;
        return;
    }
    
    for(int g = 0; g < 50; g++){                                //initializes the rating array (DIFFERENT FROM ARRAY IN USER.H)
        rating[g] = 0;                                          //type int, used to find the minimum SSD rating
    }
    
    for(int f = 0; f < numUsers; f++){
        if(toUpper(users[f].getUsername()) == toUpper(user)){
            inputindex = f;                                     //when the names are the same, this f counter is kept as inputindex
            userexists++;                                           
            for(int l = 0; l < numUsers; l++){
            nonzero = 0;
                if(l != f){                                     //makes sure that the ratings aren't compared to the username entered
                    for(int p = 0; p < numBooks; p++){
                        if(users[l].getRatingAt(p) != 0){               //if there is a non zero rating, then nonzero counter increases
                            nonzero++;
                            break;
                        }
                    }
                    
                    if(nonzero != 0){                               //ratings are compared if they are not all 0
                        for(int p = 0; p < numBooks; p++){
                        rating[l] += pow(users[f].getRatingAt(p) - users[l].getRatingAt(p), 2);
                    
                    }
                    
                
                if(rating[l] < min){                //if the current (l) rating is less than the min then it is the new min
                    min = rating[l];
                    userindex = l;                  //also keeps what value this min is by calling it userindex
                }
                    }
                }
            }
        }
    }
    
        if(toUpper(users[inputindex].getUsername()) == toUpper(user)){
            for(int m = 0; m < numBooks; m++){
                if(users[userindex].getRatingAt(m) >= 3 && users[inputindex].getRatingAt(m) == 0){  //if the user that is being compared to has a rating of 3 or higher and the input username hasnt read it
                    cout<<"Here is the list of recommendations"<<endl;
                    arating++;                                              //conts if a book is >= 3 and hasnt been read by the input username
                    break;
                }
            }
            if(arating == 0 && nonzero != 0){                                           // book >=3 by compared, hasnt been read, and all of thier ratings are not zero
                cout<<"There are no recommendations for "<<user<<" at present."<<endl;
                return;
            }
            
            
        if(arating != 0){
            int printcounter = 0;
            for(int m = 0; m < numBooks; m++){
            if(users[userindex].getRatingAt(m) >= 3 && users[inputindex].getRatingAt(m) == 0 && printcounter < 5){      //same requirements as above but makes sure only 5 books are printed
                cout<<books[m].getTitle()<<" by "<<books[m].getAuthor()<<endl;
                printcounter++;
            }
            }
            
        }
        }
        if(userexists == 0){                            //the userexists counter never increased because the username was never found
            cout<<user<< " does not exist."<<endl;
            return;
        }
}