//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 7: Question 1

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;


Player :: Player()
{
    name = "";
    points = 0;
}

Player :: Player(string new_name, double new_points)        //allows for input values
{
    name = new_name;
    points = new_points;
}


string Player::getName()
{
    return name;
}

double Player::getPoints()
{
    return points;
}

void  Player::setName(string new_name)      //setName and setPoints allow for input in program
{
    name = new_name;
}

void  Player::setPoints(double new_points)
{
    points = new_points;
}
