//
// Created by Jeffrey Hunt on 2/10/21.
//
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

    if (checkCode()) {
        cout << "You have answered the correct code." <<endl;
    }

    for(int i =0; i < 4; i++) {
        if(userCode[i] == computerCode[i]) {
            blackScore++;
        }
    }

    // set the whiteScore
    // two arrays inside for this checklist
    //copy secret code values
    //copy user code values
    //check to see which ones they have put in
    int secretCode[6] = {0, 0, 0, 0, 0, 0};
    int realCode[6] = {0, 0, 0, 0, 0, 0};
    int r = 0;
    int b = 0;
    int o = 0;
    int g = 0;
    int y = 0;
    int w = 0;

    for(int i = 0; i < 6; i++) {
        // todo: ask for help on why this not working cause I am confused
        //Set the computerCode
        if(computerCode[i] == "red") {
            r++;
            secretCode[0] = r;
        }  if(computerCode[i] == "blue") {
            b++;
            secretCode[1] = b;
        }   if(computerCode[i] == "orange") {
            o++;
            secretCode[2] = o;
        }   if(computerCode[i] == "green") {
            g++;
            secretCode[3] = g;
        }  if(computerCode[i] == "yellow") {
            y++;
            secretCode[4] = y;
        }  if(computerCode[i] == "white") {
            w++;
            secretCode[5] = w;
        }

        // Set the user Code
        if(userCode[i] == "red") {
            r++;
            realCode[0] = r;
        }  if(userCode[i] == "blue") {
            b++;
            realCode[1] = b;
        }  if(userCode[i] == "orange") {
            o++;
            realCode[2] = o;
        }  if(userCode[i] == "green") {
            g++;
            realCode[3] = g;
        }  if(userCode[i] == "yellow") {
            y++;
            realCode[4] = y;
        }  if(userCode[i] == "white") {
            w++;
            realCode[5] = w;
        }
    }

    blackPegs = blackScore;
    cout << blackPegs << endl;
}











