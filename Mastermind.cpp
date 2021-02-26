//
// Created by Jeffrey Hunt on 2/10/21.
//
#include "Mastermind.h"


Mastermind::Mastermind() {

}

vector<string> Mastermind::getUserCode(const string& input1, const string& input2, const string& input3, const string& input4) {
    userCode.push_back(input1);
    userCode.push_back(input2);
    userCode.push_back(input3);
    userCode.push_back(input4);

    return userCode;
}

vector<string> Mastermind::generateComputerCode() {
    srand(time(0));

    vector<string> colors = {"red", "blue", "orange", "green", "yellow", "white"};
    for(int i=0; i < 4; i++) {
        int j = rand() % colors.size();

        computerCode.push_back(colors[j]);
    }

    return computerCode;
}

bool Mastermind::checkCode() {
    if(userCode == computerCode) {
        return true;
    } else {
        return false;
    }
}

void Mastermind::sendFeedback() {
    int blackScore = 0;
    int whiteScore = 0;
    int r =0;

    if (checkCode()) {
        cout << "You have answered the correct code." <<endl;
    }

    for(int i =0; i < 4; i++) {
        if(userCode[i] == computerCode[i]) {
            blackScore++;
        }
    }

    //Get the white score

    }











