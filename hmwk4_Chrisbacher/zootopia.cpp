//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 4: Question 3

#include <iostream>
using namespace std;

int main() {
    int choice; 
    double agility;
    double strength;
    double speed;
    double hirescore;
    
    while (choice != 4) {               //Sets loop and makes it get out of loop when choice 4 is selected
    
    cout<<"Select a numerical option:"<<endl;
    cout<<"=== menu ==="<<endl;
    cout<<"1. Fox"<<endl;
    cout<<"2. Bunny"<<endl;
    cout<<"3. Sloth"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>choice;
    
    switch (choice){
    
    case 1:                                     //Fox
    cout<<"Enter agility:"<<endl;
    cin>>agility;
    cout<<"Enter strength:"<<endl;
    cin>>strength;
    
    hirescore = double(1.8*agility + 2.16*strength);        //Inputs times multiplier given by problem
    cout<<"Hire Score: "<<hirescore<<endl;
    break;
    
    case 2:                                         //Bunny
    cout<<"Enter agility:"<<endl;
    cin>>agility;
    cout<<"Enter speed:"<<endl;
    cin>>speed;
    
    hirescore = double(1.8*agility + 3.24*speed);       //Inputs times multiplier given by problem
    cout<<"Hire Score: "<<hirescore<<endl;
    break;
    
    case 3:                                 //Sloth
    cout<<"Enter strength:"<<endl;
    cin>>strength;
    cout<<"Enter speed:"<<endl;
    cin>>speed;
     hirescore = double(2.16*strength + 3.24*speed);        //Inputs times multiplier given by problem
    cout<<"Hire Score: "<<hirescore<<endl;
    break;
    
    case 4:                                 //Quit
    
    cout<<"Good bye!";
    return 1;                                           //Ends program
    
    break;
    
    default:                            //All ofther options are invalid, still loops
    cout<<"Invalid option"<<endl;
    break;
    }

    }
}