//
// Created by Jeffrey Hunt on 2/10/21.
// This is all my own work with help from the instructor and internet

#include "Mastermind.h"


Mastermind::Mastermind() {

}

vector<string> Mastermind::getUserCode(const string& input1, const string& input2, const string& input3, const string& input4) {
    userCode.clear();

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
    for(int i =0; i < 4; i++) {
        if(userCode[i] != computerCode[i]) {
            return false;
        }
    }
    return true;
}

void Mastermind::sendFeedback() {
    int blackScore = 0;
    int whiteScore = 0;


    for (int i = 0; i < 4; i++) {
        if (userCode[i] == computerCode[i]) {
            blackScore++;
        }
    }

    //check to see which ones they have put in
    int secretCode[6] = {0, 0, 0, 0, 0, 0};
    int realCode[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        // todo: ask for help on why this not working cause I am confused
        //Set the computerCode

        if (computerCode[i] == "red") {
            secretCode[0]++;
        }
        if (computerCode[i] == "blue") {
            secretCode[1]++;
        }
        if (computerCode[i] == "orange") {
            secretCode[2]++;
        }
        if (computerCode[i] == "green") {
            secretCode[3]++;
        }
        if (computerCode[i] == "yellow") {
            secretCode[4]++;
        }
        if (computerCode[i] == "white") {
            secretCode[5]++;
        }

        if (userCode[i] == "red") {
            realCode[0]++;
        }
        if (userCode[i] == "blue") {
            realCode[1]++;
        }
        if (userCode[i] == "orange") {
            realCode[2]++;
        }
        if (userCode[i] == "green") {
            realCode[3]++;
        }
        if (userCode[i] == "yellow") {
            realCode[4]++;
        }
        if (userCode[i] == "white") {
            realCode[5]++;
        }
    }

    for (int i = 0; i < 6; i++) {
        // need to compare the two together
        // todo: get white score from two arrays
        if(realCode[i] < secretCode[i]) {
            whiteScore += realCode[i];
        } else {
            whiteScore += secretCode[i];
        }

    }
    blackPegs = blackScore;
    whitePegs = whiteScore;
    whitePegs = whitePegs - blackPegs;
    cout << "B: " << blackPegs << " W: " << whitePegs << endl;
    }










