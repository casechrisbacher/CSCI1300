//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 3: Question 3
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int sushi;
    double totalprice;
    cout<<"Enter the number of sushi:"<<endl;
    cin>>sushi;
    
    if (sushi <= 0)     //less than 0 sushi is invalid
    {
        cout<<"Invalid input";
    }
    
    if (sushi > 0 && sushi < 10)        //greater than 0 and less than ten gets no discount
    {
        totalprice = sushi*(double)1.99;        //sushi price is 1.99
        cout<<"Total price: $";
        cout<<setprecision(2)<<fixed<<totalprice;
    }
    
    if (sushi >= 10 && sushi < 20)      //10 to 19 sushi rolls gets a ten percent discount
    {
        totalprice = ((sushi*(double)1.99)*(double).9);     //multiply by .9 because ten percent discount- sushi price is 1.99
        cout<<"Total price: $";
        cout<<setprecision(2)<<fixed<<totalprice;
    }
    
    if (sushi >= 20 && sushi < 50)      //20 to 49 rolls
    {
        totalprice = ((sushi*(double)1.99)*(double).85);        //multiply by .85 because fifteen percent discount- sushi price is 1.99
        cout<<"Total price: $";
        cout<<setprecision(2)<<fixed<<totalprice;
    }
    
    if (sushi >= 50 && sushi < 100)     //50 to 99 rolls
    {
        totalprice = ((sushi*(double)1.99)*(double).8);     //20 percent discount so mult by .8- sushi price is 1.99
        cout<<"Total price: $";
        cout<<setprecision(2)<<fixed<<totalprice;
    }
        
    if (sushi >= 100)                   //100 or more rolls
    {
        totalprice = ((sushi*(double)1.99)*(double).75);        //25 percent discount so mult by .75- sushi price is 1.99
        cout<<"Total price: $";
        cout<<setprecision(2)<<fixed<<totalprice;
    }
}