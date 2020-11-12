//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 8 Problem 2

#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryRecursive (int input)
{
    string output;
    int nonzero = 0;
    char one = '1';
    char zero = '0';
    

    if(input == 0){
        if(nonzero == 0){
            output = "0";
        }
        return output;
    }
    else{
         if (input % 2 == 0){
            output = zero + output;
        }
        else{
            output = one + output;
        }
        nonzero++;
         
    }
    input = input / 2;
     return decimalToBinaryRecursive(input) + output;
}