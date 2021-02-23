// Jeffrey Hunt
// 2-11-21
// Mastermind Program


#include <iostream>
#include "Mastermind.h"
#include "Code.h"

using namespace std;

int main() {
    Mastermind mastermind;

    string guess1;
    string guess2;
    string guess3;
    string guess4;

    cin >> guess1 >> guess2 >> guess3 >> guess4;

    vector<string> userCode = mastermind.getUserCode(guess1, guess2, guess3, guess4);


    return 0;
}
