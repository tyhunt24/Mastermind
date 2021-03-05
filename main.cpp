// Jeffrey Hunt
// 2-11-21
// Mastermind Program
// This is all my own work with help from the instructor


#include <iostream>
#include "Mastermind.h"
#include "Code.h"

using namespace std;

int main() {
    // call our other class
    Mastermind mastermind;

    //create initial variables
    int i;
    string guess1;
    string guess2;
    string guess3;
    string guess4;

    //generate the secret computer code
    vector<string> computerCode = mastermind.generateComputerCode();

    //Introduce the user to the game
    cout << "Welcome to MasterMind" << endl;
    cout << "Enter the values as lowercase values" << endl;
    cout << "You will have 10 guesses to get the correct code." << endl;
    cout << " " << endl;
    cout << "Enter 4 different colors out of 6: red blue orange green yellow white: " << endl;

   // start the for loop allow the user ten tries
   for(i = 10; i >= 0; i--) {
        //put the user guess in
        cin >> guess1 >> guess2 >> guess3 >> guess4;
        //get the userCode from the mastermind class
        vector<string> userCode = mastermind.getUserCode(guess1, guess2, guess3, guess4);

        //checks to see if the user wins
        if(mastermind.checkCode()) {
            cout << "Congrats you have won the game." << endl;
            break;
        }
       if (i != 0) {
           cout << "You have " << i << " guesses left." << endl;
           mastermind.sendFeedback();
           cout << "Enter 4 new values: " <<endl;
       }

   }

   // send back if the user loses the game
   if(!mastermind.checkCode()) {
       cout << "sorry you have lost the game." << endl;
       cout << "Here is the correct code: " << endl;

       // Display the correct code
       for(int i = 0; i< computerCode.size(); i++) {
           cout <<computerCode[i] << " ";
       }
   }
    return 0;
}
