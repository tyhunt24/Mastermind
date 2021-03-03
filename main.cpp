// Jeffrey Hunt
// 2-11-21
// Mastermind Program


#include <iostream>
#include "Mastermind.h"
#include "Code.h"

using namespace std;

int main() {
    Mastermind mastermind;

    int currentPosition = 0;

    string guess1;
    string guess2;
    string guess3;
    string guess4;

    vector<string> computerCode = mastermind.generateComputerCode();

    cout << "Welcome to MasterMind" << endl;
    cout << "Enter the values as lowercase values" << endl;
    cout << "Enter 4 different colors out of 6: red blue orange green yellow white: " << endl;

   while (currentPosition < 10) {
        cin >> guess1 >> guess2 >> guess3 >> guess4;
        vector<string> userCode = mastermind.getUserCode(guess1, guess2, guess3, guess4);

        mastermind.sendFeedback();

        if(mastermind.checkCode()) {
            break;
        } else {
            cout << "Enter 4 new values: " <<endl;
        }


        currentPosition++;
    }
    return 0;
}
