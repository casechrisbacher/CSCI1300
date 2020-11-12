//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 1: Question 1


#include <iostream>
#include <cmath>
using namespace std;



double surfaceArea(double baselength, double slantheight) //establishes function name and declares variables
{
    double sArea = (double)2*(baselength*slantheight)+(double)(pow(baselength,2)); //basic SA function (Surface area of pyramid is Base*Height/2, but there are 4)
    
    if (baselength < 0 || slantheight < 0 ) //If statement to avoid negative values
    { 
        sArea = -1;
    }
    
    return sArea;


}
    
int main(){
    double baselength;      //Re-declared vary's
    double slantheight;
    cout<<"Enter the base length: ";
    cin>>baselength;
    cout<<"Enter the slant height: ";
    cin>>slantheight;
    

        
        double finalsurfacearea = surfaceArea(baselength, slantheight); //line to simplify final line
        cout<<"The surface area: "<<finalsurfacearea;
}
