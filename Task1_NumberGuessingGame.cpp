#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int RandNumber =  rand()%100 +1 ;
    int guess=0;
    int attempts = 0;
    cout<<"I have picked a random number. Please try to guess it "<<endl;
    while(guess!=RandNumber){
           cout<<" Enter your guess:"<<endl;
    cin>>guess;
    attempts++;
        if(guess>RandNumber){
            cout<<"your guess is too high . try again !"<<endl;        
        }
   else if(guess<RandNumber) {
    cout<<"your guess is too low . try again ! "<<endl;}    
    else{
        cout<<"Congratulations! You have successfully guessed the number."<<endl;
    }
            }
            cout<<" you guessed it in "<<attempts<<" attempts."<<endl;
            return 0; 
    }