//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 2

#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User :: User()
{
    username = "";
    for (int i = 0; i < 50; i++){           //sets all ratings in the ratings array to 0
        ratings[i] = 0;
    }
}

void User :: setUsername(string name)
{
    username = name;
}

bool User :: setRatingAt(int index, int rate)
{
    bool value;
        if (index >= 0 && index < 50 && rate >= 0 && rate <= 5){            //makes sure index is 1-50 and rating is 0-5
            ratings[index] = rate;
            value = true;
        }
        else {
            value = false;
        }
    return value;
}

string User :: getUsername()
{
    return username;
}

int User :: getRatingAt(int number)
{
    if(number >= 0 && number < 50){
        return ratings[number];
    }
    else{
        return -1;
    }
}