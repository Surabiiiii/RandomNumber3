#include <iostream>
#include <ctime>
using namespace std;
void GameIntroduction(int Difficulty)
{ //Welcome to our game
    cout<<"The code to the secret treasure can be unlocked by code" <<endl;
    cout<< "Game Level:"<< Difficulty<<endl;
    cout<<"Guess the correct code using"<<endl;
}

bool bPlayGame (int Difficulty)
{ 
    GameIntroduction( Difficulty);
//Provide the values of three digits of treasure code.
   const  int CodeA=rand()%(3+2*Difficulty);
   const  int CodeB=rand()%(3+2*Difficulty);
   const  int CodeC=rand()%(3+2*Difficulty);
//Sum and Product   
   const int CodeSum= CodeA+CodeB+CodeC;
   const int CodeProduct= CodeA*CodeB*CodeC;
   cout<<"There are three digits"<<endl;
   cout<<"The three digits sums up to give"<<" "<<CodeSum<<endl;
   cout<<"Three digits product is"<<" "<<CodeProduct<<endl;
   cout << "numbers are between 0 and "<< (2+2*Difficulty)<<endl;
//Take input from users.
   int FTry,STry,TTry;
   cin>>FTry>>STry>>TTry;
   int GSum= FTry+STry+TTry;
   int GProduct=FTry*STry*TTry;
   //Declare the result
   if(GSum==CodeSum && GProduct==CodeProduct)
    {
       cout<<"Treasure is unlocked!! You win"<<endl;
       return true;
    }
   else 
    {
       cout<<"You are Stupid.You loose"<<endl;
       return false;
    }
}


int main()
{
 srand(time(NULL));  // random numbers matching time;
 int Difficulty=1;
 const int MaxD =5;
 while(Difficulty<=MaxD) // loop until we reach max difficulty level
 { 
 bool blevelcomplete=bPlayGame(Difficulty);
 cin.clear();  // Clear any error
 cin.ignore();  //Discards Buffer
 if (blevelcomplete)
 {
   cout<<"Next Level"<<endl;
   ++Difficulty;
 }
 if (blevelcomplete==0){
    cout<<"oops bad luck!"<<endl;
 } 
    cout<<"congratulations!\nYou Win"<<endl;
 } 
 
 return 0;
}

