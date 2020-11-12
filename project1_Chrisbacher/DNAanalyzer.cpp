//CSCI 1300 Spring 2020
//Author: Case Chrisbacher
//Section 106 - TA Sravanth Yajamanam
//Project 1: Question 7 DNA FINAL COMBINATION
#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string seq1, string seq2)
{
   double similarity_score;
   double hamming_distance = 0;
    double string_length = seq1.length();
        if (seq1.length() != seq2.length() || seq1 == "" || seq2 == ""){        //returns 0 for blank/ uneven sequences
            return 0;
        }
        
        for (int i = 0 ; i <= string_length ; i++)
        {
             if (seq1[i] != seq2[i]){               //checks each box in the array and if they are not equal, hamming distance is increased by 1
                hamming_distance += +1;
        }
        
         
        
    }
    similarity_score = (double)(string_length - hamming_distance)/string_length;
return similarity_score;
    
}


double findBestSimScore (string genome, string sequence)
{
    if (genome == "" || sequence == "" || sequence.length() > genome.length()){
        return 0;
    }
        double hamming_distance = 0;
        double subsimscore;
        double values[100];
        double maxvalue;
   for (int j = 0; j <= genome.length()-sequence.length(); j++)    //makes sure that the sequence doesnt exceed the end of the genome
   {
       
     
       
    for (int i = 0; i < sequence.length(); i++)             //starting at an increasing genome position, checking the length of the sequence
    {
        if (genome [j] != sequence[i]){                 
            hamming_distance += +1;
    
        }
    
      j++;
    }
    j = j - sequence.length();              //brings j value back for rest of of program
    
     double subsimscore = (double)(sequence.length() - hamming_distance)/sequence.length();     //equation for similiarity score
      values[j] = subsimscore;                                          //places the subsimscore in an array, increasing the space every time
      hamming_distance = 0;                                             //restarts hamming distance at 0 so that it doesnt add up for every test
    
        }
    
  
    maxvalue = values[0];                 //establishes the 0 position as the max value at beginning
    for (int x = 1; x <= genome.length()-sequence.length(); x++)
    {               
        if (values[x] > maxvalue){                 //if the array one ahead of the last is larger, then the maxvalue is changed to the next array slot
           maxvalue = values[x];
           
        }
         
    }
    return maxvalue; 

}

void findMatchedGenome(string genome1, string genome2, string genome3, string sequence){
    if (genome1 == "" || genome2 == "" || genome3 == "" || sequence == ""){
        cout<<"Genomes or sequence is empty.";
        return;
    }
    if (genome1.length() != genome2.length() || genome1.length() != genome3.length() || genome2.length() != genome3.length()){
        cout<<"Lengths of genomes are different.";
        return;
    }
    
    //=======================================GENOME #1========================================================================================
 
    double hamming_distance1 = 0;
        double subsimscore1;
        double values1[100];
        double maxvalue1;
   for (int j = 0; j <= genome1.length()-sequence.length(); j++)    //makes sure that the sequence doesnt exceed the end of the genome1
   {
       
     
       
    for (int i = 0; i < sequence.length(); i++)             //starting at an increasing genome1 position, checking the length of the sequence
    {
        if (genome1 [j] != sequence[i]){                 
            hamming_distance1 += +1;
    
        }
    
      j++;
    }
    j = j - sequence.length();              //brings j value back for rest of function
    
     double subsimscore1 = (double)(sequence.length() - hamming_distance1)/sequence.length();     //equation for similiarity score
      values1[j] = subsimscore1;                                          //places the subsimscore1 in an array, increasing the space every time
      hamming_distance1 = 0;                                             //restarts hamming distance at 0 so that it doesnt add up for every test
    
        }
    
  
    maxvalue1 = values1[0];                 //establishes the 0 position as the max value
    for (int x = 1; x <= genome1.length()-sequence.length(); x++)
    {               
        if (values1[x] > maxvalue1){                 //if the array one ahead of the last is larger, then the maxvalue is changed to the next array slot
           maxvalue1 = values1[x];
           
        }
            
    }
    
    
    //===============================================GENOME #2=========================================================================================
    double hamming_distance2 = 0;
        double subsimscore2;
        double values2[100];
        double maxvalue2;
   for (int a = 0; a <= genome2.length()-sequence.length(); a++)    //makes sure that the sequence doesnt exceed the end of the genome
   {
       
     
       
    for (int b = 0; b < sequence.length(); b++)             //starting at an increasing genome position, checking the length of the sequence
    {
        if (genome2 [a] != sequence[b]){                 
            hamming_distance2 += +1;
    
        }
    
      a++;
    }
    a = a - sequence.length();              //brings a value back to value to continue function
    
     double subsimscore2 = (double)(sequence.length() - hamming_distance2)/sequence.length();     //equation for similiarity score
      values2[a] = subsimscore2;                                          //places the subsimscore2 in an array, increasing the space every time
      hamming_distance2 = 0;                                             //restarts hamming distance at 0 so that it doesnt add up for every test
    
        }
    
  
    maxvalue2 = values2[0];                 //establishes the 0 position as the max value
    for (int c = 1; c <= genome2.length()-sequence.length(); c++)
    {               
        if (values2[c] > maxvalue2){                 //if the array one ahead of the last is larger, then the maxvalue is changed to the next array slot
           maxvalue2 = values2[c];
           
        }
            
    }
 
 //================================================GENOME #3=========================================================================================
 double hamming_distance3 = 0;
        double subsimscore3;
        double values3[100];
        double maxvalue3;
   for (int t = 0; t <= genome3.length()-sequence.length(); t++)    //makes sure that the sequence doesnt exceed the end of the genome
   {
       
     
       
    for (int u = 0; u < sequence.length(); u++)             //starting at an increasing genome3 position, checking the length of the sequence
    {
        if (genome3 [t] != sequence[u]){                 
            hamming_distance3 += +1;
    
        }
    
      t++;
    }
    t = t - sequence.length();              //brings t value back to value which it should be at
    
     double subsimscore3 = (double)(sequence.length() - hamming_distance3)/sequence.length();     //equation for similiarity score
      values3[t] = subsimscore3;                                          //places the subsimscore in an array, increasing the space every time
      hamming_distance3 = 0;                                             //restarts hamming distance at 0 so that it doesnt add up for every test
    
        }
    
  
    maxvalue3 = values3[0];                 //establishes the 0 position as the max value
    for (int f = 1; f <= genome3.length()-sequence.length(); f++)
    {               
        if (values3[f] > maxvalue3){                 //if the array one ahead of the last is larger, then the maxvalue is changed to the next array slot
           maxvalue3 = values3[f];
           
        }
            
    }
    
    
 //=====================================WHICH MAXVALUE IS THE LARGEST==========================================================
    if(maxvalue1 > maxvalue2 && maxvalue1 > maxvalue3){
     cout<<"Genome 1 is the best match.";
     return;
     }
 
     if(maxvalue2 > maxvalue1 && maxvalue2 > maxvalue3){
     cout<<"Genome 2 is the best match.";
     return;
     }
     
     if(maxvalue3 > maxvalue2 && maxvalue3 > maxvalue1){
     cout<<"Genome 3 is the best match.";
     return;
     }
     
     if(maxvalue1 > maxvalue2 && maxvalue1 == maxvalue3){
     cout<<"Genome 1 is the best match."<<endl;
     cout<<"Genome 3 is the best match.";
     return;
     }
     
     if(maxvalue1 > maxvalue3 && maxvalue1 == maxvalue2){
     cout<<"Genome 1 is the best match."<<endl;
     cout<<"Genome 2 is the best match.";
     return;
     }
     
     if(maxvalue2 > maxvalue1 && maxvalue2 == maxvalue3){
     cout<<"Genome 2 is the best match."<<endl;
     cout<<"Genome 3 is the best match.";
     return;
     }
     
     if(maxvalue1 == maxvalue2 && maxvalue2 == maxvalue3 && maxvalue1 == maxvalue3){
     cout<<"Genome 1 is the best match."<<endl;
     cout<<"Genome 2 is the best match."<<endl;
     cout<<"Genome 3 is the best match.";
     return;
     }
 
    return;
    
}



int main(){
    string seq1;
    string seq2;
    string genome;
    string genome1, genome2, genome3, sequence;
    int choice;
    
    while(choice != 4){
        
    cout<<"Select a numerical option:"<<endl;
    cout<<"=== menu ==="<<endl;
    cout<<"1. Find similarity score"<<endl;
    cout<<"2. Find the best similarity score"<<endl;
    cout<<"3. Analyze the genome sequences"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>choice;
    
    switch(choice){
        
    case 1:
    cout<<"Enter sequence 1:"<<endl;
    cin>>seq1;
    cout<<"Enter sequence 2:"<<endl;
    cin>>seq2;
    cout<<"Similarity score: "<<calcSimScore(seq1, seq2)<<endl;
    break;
    
    case 2:
    cout<<"Enter genome:"<<endl;
    cin>>genome;
    cout<<"Enter sequence:"<<endl;
    cin>>sequence;
    cout<<"Best similarity score: "<<findBestSimScore (genome, sequence)<<endl;
    break;
    
    case 3:
    cout<<"Enter genome 1:"<<endl;
    cin>>genome1;
    cout<<"Enter genome 2:"<<endl;
    cin>>genome2;
    cout<<"Enter genome 3:"<<endl;
    cin>>genome3;
    cout<<"Enter sequence:"<<endl;
    cin>>sequence;
    findMatchedGenome(genome1, genome2, genome3, sequence);
    cout<<" "<<endl;
    break;
    
    case 4:
    cout<<"Good bye!";
    return 1;
    break;
    
    default:
    cout<<"Invalid option."<<endl;
    break;
    
    
        }
    }
}
