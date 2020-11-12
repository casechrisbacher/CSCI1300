//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 5

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <list>
using namespace std;

int vectorprogram (int inputnumber){
    cout<<"Please enter a number:"<<endl;
        cin>>inputnumber;
    int currentsize = 0;
    vector<int> values(currentsize);
    
    
    while (inputnumber != -1){          //cancel statement is -1
        
        
        if (values.size() == 0){        //if its empty just add number
        
    
            values.push_back(inputnumber);
            currentsize++;
        }
        
        
        if (values.size() != 0){
            if (inputnumber % 5 == 0 && currentsize != 1){      //if there is more than one value and it divides by 5 take value off front
              values.erase(values.begin());
              currentsize--;                                    //and decrease the current size
            }
             if (inputnumber % 3 == 0 && currentsize != 1){     //takes number off of the end
                 values.pop_back();
                 currentsize--;                                 //and decreases the current size
             }
             if (inputnumber % 3 != 0 && inputnumber % 5 != 0){ //if it doesnt fit either statement it adds number to the end
                 values.push_back(inputnumber);
                 currentsize++;
             }
             
             
               
            }
            cout<<"Please enter a number:"<<endl;
        cin>>inputnumber;
        
        
        }
        int maxvalue = values[0];                   //establishes max value, compares it to the next slot, which because max if it is larger
        for (int x = 1; x < currentsize; x++){
            if (values[x] > maxvalue){
                maxvalue = values[x];
            }
        }
        
        int minvalue = values[0];               //establishes min value, compares it to the next slot, which because min if it is smaller
        for (int t = 1; t < currentsize; t++){
            if (values[t] < minvalue){
                minvalue = values[t];
            }
        }
        
        if (values[0] == 2){
            values.erase(values.begin());
            currentsize--;
        }
        if (values.size() > 1 && values[0] % 5 == 0){           
            values.erase(values.begin());
            currentsize--;
        }
    
    
    if (inputnumber = -1){                      //if the value is -1 out put the elements still in the vector
       cout<<"The elements in the vector are: ";
       for (int m = 0; m < currentsize; m++){
           cout<<values[m]<<" ";
       }
       cout<<endl;                                  //outputs max/min
       cout<<"Min = "<<minvalue<<endl;
       cout<<"Max = ";
       return maxvalue;
    }
    
}


int main(){
    int inputnumber;
    int currentsize = 0;
    vector<int> values(currentsize);
       cout<<vectorprogram(inputnumber);

       
       
       
}