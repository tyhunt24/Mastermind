// Jeffrey Hunt
// 2-11-21
// Mastermind Program


#include <iostream>
#include "Mastermind.h"
#include "Code.h"

using namespace std;

int main() {
    Mastermind mastermind;
    int i;
    string guess1;
    string guess2;
    string guess3;
    string guess4;

    vector<string> computerCode = mastermind.generateComputerCode();

    for(int i = 0; i< computerCode.size(); i++) {
        cout <<computerCode[i] << endl;
    }

//    cout << "Welcome to MasterMind" << endl;
//    cout << "Enter the values as lowercase values" << endl;
//    cout << "You will have 10 guesses to get the correct code." << endl;
//    cout << " " << endl;
//    cout << "Enter 4 different colors out of 6: red blue orange green yellow white: " << endl;

   for(i = 3; i >= 0; i--) {
        cin >> guess1 >> guess2 >> guess3 >> guess4;
        vector<string> userCode = mastermind.getUserCode(guess1, guess2, guess3, guess4);

       mastermind.sendFeedback();
        if(mastermind.checkCode()) {
            break;
        }
            cout << "You have " << i << " guesses left." << endl;
            cout << "Enter 4 new values: " <<endl;
   }

   if(!mastermind.checkCode()) {
       cout << "sorry you have lost the game." << endl;
   }
    return 0;
}
