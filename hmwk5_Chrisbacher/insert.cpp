//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Homework 5: Question 3

#include <iostream>
#include <string>
using namespace std;                //***had to get rid of cout in code for code runner** they worked for my code

int insert (int arrayinput[], int numberofelements, int totalsize, int newelement){
arrayinput[totalsize];
string initiallist;
string finallist;
char comma = ',';

if(totalsize == numberofelements){              //if the total size of array is equal to the number of elements
    for (int l = 0; l < numberofelements - 1; l++){
        cout<<arrayinput[l]<<comma;             //output the array without inserted number
        
}
return arrayinput[numberofelements - 1];
}

if (newelement > arrayinput[numberofelements -1]){          //if the new element is larger than the last arrayinput slot
    arrayinput[numberofelements] = newelement;          //the new element is added as the last slot
    for (int l = 0; l < numberofelements; l++){
        cout<<arrayinput[l]<<comma;
        
}
return arrayinput[numberofelements];
}
   
    
    for (int i = 0; i < numberofelements ; i++){
        if (newelement <= arrayinput[i]){               //runs through until new element is smaller or equal to the number in the next array slot
       if(newelement < arrayinput[0] || newelement > arrayinput[i - 1]){
       for (int m = numberofelements; m > i; m--){
           arrayinput[m] = arrayinput[m-1];                 //shifts the rest of the numbers in front of spot for new element, starting with last slot
       }
       arrayinput[i] = newelement;                          //the new element is now in that slot
       }

      
        }
        
    
    
    
}
for (int l = 0; l < numberofelements; l++){
        cout<<arrayinput[l]<<comma;
    
        
   }
   return arrayinput[numberofelements];
}

main(){
    int numberofelements;           
    int totalsize;
    int newelement;
    int array[totalsize];
    int arraynumbers;
    cout<<"Enter size of array"<<endl;
    cin>>totalsize;
    int arrayinput[totalsize];
    cout<<"Enter intitial ammount of elements"<<endl;
    cin>>numberofelements;
    cout<<"Enter array"<<endl;
    for (int x = 0; x < numberofelements; x++){
        cin>>arraynumbers;
        arrayinput[x] = arraynumbers;
    }
    cout<<"Enter new element"<<endl;
    cin>>newelement;
    cout<<insert (arrayinput, numberofelements, totalsize, newelement);
}