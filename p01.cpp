#include <iostream> 
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int tries, randnum, guess;
    string difficulty;
    string response;
    srand ( time(NULL) );
    cout<<"Do you want want to play easy, medium, or hard?"<<endl;
    cin>> difficulty; 
    if (difficulty == "easy")
        {
        tries = 1;
        randnum = rand() % 2 + 1;
        }
        else if (difficulty == "medium")
        {
        tries = 2;
        randnum = rand() % 10 + 1;
        }
        else
        { 
        tries =3; 
        randnum = rand() % 100 + 1;
        }
        for ( int i=0; i<tries; i++);
        { 
        cout<<"Guess the computer's number."<<endl;
        cin>>guess;
        }
     if (guess==randnum)
        {
        cout<<"You guessed correctly! You win!"<<endl;
        }
    if (guess>randnum)
        {
        cout<<"Guess lower"<<endl;
        }
        else
        {
        cout<<"Guess higher"<<endl;
        }
    if (guess!=randnum)
        {
        cout<<"You were off by  "<<abs(guess-randnum)<<" . Sorry, you lose."<<endl;
        }
        

        return 0;
}
