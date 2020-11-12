#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>      
#include <stdlib.h>
#include "Pirates.h"
#include "Enemies.h"
#include "TreasureIsland.h"
#include <ctime>
#include <time.h>
using namespace std;


 bool run(int timesRan, int pointingame, Pirates p, TreasureIsland ti)  
 {
     bool escape=false;
     
     int enenmySpeed=(3*(ti.getEnemyEnduranceAt(pointingame)));     //endurance is 1-5
   
     int heroSpeed=(p.getHeroSpeed());                              //hero speed goesd 1-10.  Min is 2
   
     int didHeroMakeIt, oddsHeroMakesIt;
     
     
     srand(time(0));     //sets time based off compututer's internal clock  
     oddsHeroMakesIt=1+(enenmySpeed*(1+timesRan))/heroSpeed;   //harder to run away the more time you try to run per fight
    //cout<<"Odds hero makes it: "<<oddsHeroMakesIt<<endl;
     didHeroMakeIt = (rand() % oddsHeroMakesIt)+1;//generates random number between 1 and the odds hero makes it
    // cout<<"did hero make it: "<<didHeroMakeIt<<endl;
   if(didHeroMakeIt==1)
     {
         escape=true;
    }
   

   
     return escape;
 
 }
 


 bool hide(int pointingame, int timesHide, Pirates p, TreasureIsland ti)
 {
     bool hidden=false;
     int camo=p.getHeroCamo(); //camo is 0-10
     int eyeSight=ti.getEnemyEyeSightAt(pointingame);//eyesight 0-20
     int oddsHeroHides;
     int didHeroHide;
   
     srand(time(0));
   
     if(eyeSight!=20)    //can't hide from black beard
     {
         oddsHeroHides=((timesHide+1)*(2*eyeSight))/camo;
         didHeroHide=(rand() % oddsHeroHides)+1;
         if(didHeroHide==2 || didHeroHide==1)
         {
             hidden=true;
         }
       
     }
   
     return hidden;
 }

 void map (int pointingame)
 {
      switch (pointingame)
           {
               case 0:
                 cout<<"Skeleton cemenary"<<endl;
               break;
                 
               case 1:
               
                 cout<<"Spider cave"<<endl;
       
               case 2:
               
                 cout<<"Pirate dock"<<endl;
              break;
       
               case 3:
               cout<<"Best mate on the deck wioth the wheel"<<endl;
               
         
               break;
       
               case 4:
               cout<<"Black Beard in captain's quarters"<<endl;
               
               
               break;
             }
   
 }

bool menudropdown(int pointingame, int timesHide, int timesRan, Pirates p, TreasureIsland ti)
{
   
    int herohealth;
    int choice = 0;
    int healthlost;
    int quitter = 0;
    bool cower=false;
    bool gotAway=false;
    int enemyhealth = ti.getEnemyHealthAt(pointingame);

   
    if(timesRan==0 && timesHide==0){
        if (pointingame >= 0 && pointingame <= 2){
            cout<<"Watch out traveler! A "<<ti.getEnemyNameAt(pointingame)<<" seems to be blocking your path"<<endl;
        }
        if (pointingame == 3){
            cout<<"Oh no! it's Black Beard's best mate! What is he doing here??"<<endl;
        }
        if (pointingame == 4){
            cout<<"There's the treasure! But it seems Black Beard beat you to it, you will need to defeat him"<<endl;
        }
    }
    while(ti.getEnemyHealthAt(pointingame) > 0 && choice != 6 && p.showherohealth() > 0 && quitter != -1 && gotAway!=true ){    
    int weapon = 0;
    int potionchoice = 0;
    int potionmultiplier = 0;
       
    cout<<"HEALTH : "<<p.showherohealth()<<"/100"<<endl;
    cout<<"ENEMY HEALTH: "<<enemyhealth<<endl;
    cout<<endl;
    cout<<"Please enter an integer for your choice"<<endl;
    cout<<"==Menu=="<<endl;
    cout<<"1. Fight"<<endl;
    cout<<"2. Run"<<endl;
    cout<<"3. Hide"<<endl;
    cout<<"4. Enemy Weakness"<<endl;
    cout<<"5. Map"<<endl;
    cout<<"6. Quit"<<endl;
    cin>>choice;
   
    switch (choice)
    {  
       healthlost = 0;
        weapon = 0;
        cout<<"Choose your weapon"<<endl;
        cout<<"1. Sword"<<endl;
        cout<<"2. Fists"<<endl;
        cout<<"3. Potion"<<endl;
        cout<<endl;
            cin>>weapon;
           
            switch (weapon){
            case 1:
                cout<<"Classic choice traveler"<<endl;
                healthlost = p.herodamagecall();
                enemyhealth = enemyhealth - healthlost;
                cout<<"DAMAGE DONE: "<<healthlost<<endl;
                break;
               
                case 2:
                cout<<"You are not very smart traveler"<<endl;
                healthlost = p.herodamagecall()/2;
                enemyhealth = enemyhealth - healthlost;
                cout<<"DAMAGE DONE: "<<healthlost<<endl;
                break;
               
                case 3:
                cout<<"Pick a number between 0-9 for a chance to get a critical!"<<endl;
                cin>>potionchoice;
               
                potionmultiplier = time(NULL) % 10;
                if (potionmultiplier == potionchoice){
                    cout<<"CRITICAL HIT"<<endl;
                healthlost = p.herodamagecall()*2;
                enemyhealth = enemyhealth - healthlost;
                cout<<"DAMAGE DONE: "<<healthlost<<endl;
                }
                else{
                    cout<<"Not a critical hit."<<endl;
                healthlost = p.herodamagecall()/2;
                enemyhealth = enemyhealth - healthlost;
                cout<<"DAMAGE DONE: "<<healthlost<<endl;
                }
                break;
               
                default:
                    cout<<"Invalid weapon input."<<endl;
                    cout<<endl;
                break;
                }
               
               cout<<endl;
           
 
        break;
       
          //     run
        case 2:
            gotAway=run(pointingame, timesRan, p, ti);
            if(gotAway)
            {
                cout<<"Got away safely!"<<endl;
               
            }
            else
            {
                cout<<"Oof not fast enough.  Maybe try something else"<<endl;
                cout<<"They hit you!"<<endl;
                p.setherohealth(p.showherohealth() - (pointingame+1));
                timesRan++;
               
               
            }

        break;
       
      // hide
        case 3:
            cower=hide(pointingame, timesHide, p, ti);
            if(cower)
            {
                cout<<"Succefully evaded the enenmy!"<<endl;
            }
            else
            {
                cout<<"Try fighting, hiding is clearly not your strong suit"<<endl;
                cout<<"They hit you!"<<endl;
                p.setherohealth(p.showherohealth() - (pointingame+1));
                timesHide++;
               
               
            }
           
         
       break;
      // enenmy weakness
       case 4:
       cout<<"WEAKNESS: ";
          switch (pointingame)
           {
               case 0:
               //skele
                cout<<"Skeletons have no muscles, no eyes, and no lungs. Low health, bad eyesight, low endurance"<<endl;
               break;
                 
               case 1:
               //spider
                cout<<"Spiders have 8 legs, which move with incredible speed. They're fighting technique is poor, as well as their vision. "<<endl;
               break;
       
               case 2:
               //pirate
                cout<<"Pirates have great sea legs, but struggle to run on land."<<endl;
               break;
       
               case 3:
               cout<<"Black Beard's best mate lacks most in speed and damage.  Run for your life or put up your best fight."<<endl;
               //Best mate
         
               break;
       
               case 4:
               cout<<"Black Beard has no weakness!  Fight for your life!!!"<<endl;
                //BB
               
               break;
               }
        break;
      // map
        case 5:
            map(pointingame);

       
         
        break;
       
        case 6:
        cout<<"Goodbye Traveler!"<<endl;
        return false;
        break;
       
        default:
        cout<<"Please enter a valid choice"<<endl;
        break;
    }
   
    if (choice == 1){   //get hit after you fight
        cout<<"They hit you back!"<<endl;
        p.setherohealth(p.showherohealth() - (pointingame+3));
    }
   
   
    }
    if (herohealth < 0){
        cout<<"Oh no you died! That's a bummer."<<endl;
        ti.setquitoption(-1);
    }
    return true;
}




int main(){
    Pirates p;
    Enemies e;
    TreasureIsland ti;
    int pointingame=0;
    int timesHide, timesRan;
    bool didntquit=true;
    string usercharacter;
    int quitoption;
   
   
    //Introduction
    cout<<"Hello traveler, welcome to treasure island!"<<endl;
    cout<<"Deep in the island is a glorious treasure which many travelers have attempted to find"<<endl;
    cout<<"Luckily for you I have a map, but unluckily for you, there will be many enemies along the way"<<endl;
    cout<<"Each enemy has distinct characteristics, and I advise you fight to their weaknesses."<<endl;
    cout<<endl;
    cout<<"Please begin by choosing a character (write out the character name)"<<endl;
    cout<<"Character Options:"<<endl;
    cout<<"Strongman: The strongest of the characters, but lacks in speed and camoflauging abilities"<<endl;
    cout<<"Speedster: A quick one, lacks in strength, but small stature gives him average camoflauge abilities"<<endl;
    cout<<"Ninja: Strong, fast, good camo, the easiest character to survive with"<<endl;
    cout<<"Smallfry: You want a challenge? Pick smallfry"<<endl;
    cout<<"JackSparrow: A classic choice"<<endl;
   
   bool validcharacterinput = false;
   
   while(validcharacterinput == false){
    usercharacter = "";
    cin>>usercharacter;
    validcharacterinput = p.choosecharacter(usercharacter);
   }
   ti.setEnemyAttributes();
   
   
    cout<<"Begin your journey by entering the jungle, but beware of skeletons who lurk in depths"<<endl;
   
   
   
    //Skeleton 1
     if (didntquit == true){
        didntquit=menudropdown(pointingame, timesHide, timesRan, p, ti);
        timesHide=0;
        timesRan=0;
        pointingame++;
      }
    //Spider 2
     if (didntquit == true){
        didntquit=menudropdown(pointingame,timesHide, timesRan, p, ti);
   
     timesHide=0;
     timesRan=0;
     pointingame++;
     }
    //Pirate 3
     if (didntquit == true){
        didntquit=menudropdown(pointingame,timesHide, timesRan, p, ti);
   
        timesHide=0;
        timesRan=0;
        pointingame++;
      }
    //Best Mate 4
     if (didntquit == true){
        didntquit=menudropdown(pointingame,timesHide, timesRan, p, ti);
   
         timesHide=0;
         timesRan=0;
         pointingame++;
      }
    //BlackBeard 5
      if (didntquit == true){
         didntquit=menudropdown(pointingame, timesHide, timesRan, p, ti);
      }
   
    if (didntquit == true){
   cout<<"THE TREASURE IS YOURS! CONGRATULATIONS! GAME OVER"<<endl;
   }
   
}
