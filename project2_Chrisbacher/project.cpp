//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int inputnumber;
    int menucount = 0;
    Library one;                                                //establishes one as the library
    cout<<"Select a numerical option:"<<endl;                   //prints these out for the first time
    cout<<"======Main Menu====="<<endl;
    cout<<"1. Read books"<<endl;
    cout<<"2. Read ratings"<<endl;
    cout<<"3. View ratings"<<endl;
    cout<<"4. Print all books"<<endl;
    cout<<"5. Update a rating"<<endl;
    cout<<"6. Add a user"<<endl;
    cout<<"7. Get recommendations"<<endl;
    cout<<"8. Quit"<<endl;
    
    while (inputnumber != 8){                                       //8 is the quit number so it exits when that happens, loops when it's not
        string file = "";
        if (menucount !=0){                                         //does not print first time because printed above
            cout<<"Select a numerical option:"<<endl;               //This is redundant as the code stands right now, the input location was changed
            cout<<"======Main Menu====="<<endl;                     //I left this in to match my coderunner, and it still works
            cout<<"1. Read books"<<endl;
            cout<<"2. Read ratings"<<endl;
            cout<<"3. View ratings"<<endl;
            cout<<"4. Print all books"<<endl;
            cout<<"5. Update a rating"<<endl;
            cout<<"6. Add a user"<<endl;
            cout<<"7. Get recommendations"<<endl;
            cout<<"8. Quit"<<endl;
        }
        menucount++;
        cin>>inputnumber;
        
        switch(inputnumber)
        {
            case 1:
            {
                int bookcount = 0;                          //intiating
                cout<<"Enter a book file name:"<<endl;
                cin>>file;
                bookcount = one.readBooks(file);
                
                if (bookcount <= 0){                                //no books in library
                    cout<<"No books saved to the library."<<endl;
                }
                else{
                cout<<"Total books in the library: "<<bookcount<<endl;      //bookcount
                }
            break;
            }
            
            case 2:
            {                   
                int usercount = 0;                                          //initiating
                cout<<"Enter a user file name:"<<endl;
                cin>>file;
                usercount = one.readRatings(file);
                
                if(usercount <= 0){
                    cout<<"No users saved to the library."<<endl;
                }
                else{
                    cout<<"Total users in the library: "<<usercount<<endl;
                }
            
            break;
            }
            
            case 3:
            {
                string username = "";                       //initiating
                int min = 0;
                cout<<"Enter a user name:"<<endl;
                cin>>username;
                cout<<"Enter a minimum rating:"<<endl;
                cin>>min;
                one.viewRatings(username, min);
            break;
            }
            
            case 4:
            {
                one.printAllBooks();
            break;
            }
            
            case 5:
            {
                string name = "";                               //initiate all 3
                string booktitle = "";
                int newrating = 0;
                cout<<"Enter a user name:"<<endl;
                cin>>name;
                cout<<"Enter a book title:"<<endl;
                cin.ignore();
                getline(cin, booktitle);                            //used to get past spaces in book title names
                cout<<"Enter a new rating:"<<endl;
                cin>>newrating;
                one.updateRating(name, booktitle, newrating);
            break;
            }
            
            case 6:
            {
                string user = "";                       //set to blank
                cout<<"Enter a user name:"<<endl;
                cin>>user;
                one.addUser(user);
            break;
            }
            
            case 7:
            {
                string uniquename = "";
                cout<<"Enter a user name:"<<endl;
                cin.ignore();
                getline(cin, uniquename);
                one.getRecommendations(uniquename);
            break;
            }
            
            case 8:                     //kept blank because it will skip through this, exit the while loop and say good bye when it exits
            {
            break;
            }
            
            default:                    //non 1-8 numbers output as invalid
            {
            cout<<"Invalid option."<<endl;
            }
        }
    }
    cout<<"Good bye!"<<endl;                    
    return 0;
    
}