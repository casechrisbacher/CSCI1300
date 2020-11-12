//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 6

#include <iostream>
using namespace std;

int main(){
    int howpersonalized;
    string yesorno;
    string yes = "yes";
    string Yes = "Yes";
    int facebookfriends;
    int zipcode;
    int age;
    
    cout<<"How personalized should the ad be? (1-3)"<<endl;
    cin>>howpersonalized;
    
    if(howpersonalized > 3 || howpersonalized <= 0)                         //Makes sure that user only gets results between 1-3 personailization
    {
        cout<<"Invalid option."<<endl;}
    
    
    switch(howpersonalized){
    case 1:                                                                 //Choice 1 of how personalized
    cout<<"Do you own a dog?"<<endl;
    cin>>yesorno;
    if (yesorno == yes|| yesorno == Yes){                                   //User can enter Yes or yes for if to work
        cout<<"Meat's the need of dogs like yours!"<<endl;
    }
    else{
        cout<<"Dirty mouth? Clean it up with new Orbit Raspberry Mint."<<endl;  //Anything else entered shows this
        
    }
    break;
    
    
    
    case 2:                                                                 //User pics 2 for how personalized
    cout<<"How many Facebook friends do you have?"<<endl;
    cin>>facebookfriends;
    if (facebookfriends >= 500){
        cout<<"Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service."<<endl; //Statement for user with 500+ FB friends
    }
    else{
        cout<<"Who doesn't need another cat? Adopt a shelter pet right meow.";                          //If user has 499 or less
    }
    
    break;
    
    case 3:                                                                                         //Picked 3 for how personalized
    cout<<"What is your zip code?"<<endl;
    cin>>zipcode;
    
    if (zipcode >= 80301 && zipcode <= 80310){                                              //Boulder zipcode restrictions
        cout<<"What is your age?"<<endl;
        cin>>age;
        
        if (zipcode >= 80301 && zipcode <= 80310 && age >= 25)                              //In boulder and 25+ in age
        cout<<"You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike.";
        
        if(zipcode >= 80301 && zipcode <= 80310 && age < 25){                              //In Boulder Less than 25
        cout<<"Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen."<<endl;
        }
    }
    else{
        cout<<"What is your age?"<<endl;                                    //Not in boulder
        cin>>age;
        cout<<"Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO."<<endl;
    }
    
    break;
    
    
    }
    return 0;
}