//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 8 Problem 1

#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryIterative (int input)
{
    string output = "";
    int nonzero = 0;
    char one = '1';
    char zero = '0';
    while (input != 0){
        if (input % 2 == 0){
            output = zero + output;
        }
        else{
            output = one + output;
        }
        
        
        input = input / 2;
        nonzero++;
    }
    if (nonzero == 0){
        output = "0";
    }
    return output;
}