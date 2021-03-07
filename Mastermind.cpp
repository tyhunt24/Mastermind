//
// Created by Jeffrey Hunt on 2/10/21.
// This is all my own work with help from the instructor and internet

#include "Mastermind.h"

// allows to gert user code
vector<string> Mastermind::getUserCode(const string& input1, const string& input2, const string& input3, const string& input4) {
    userCode.clear();

    //pushes back into a vector
    userCode.push_back(input1); //green
    userCode.push_back(input2); //orange
    userCode.push_back(input3); //blue
    userCode.push_back(input4);// white

    return userCode;
}

//generates the computer code
vector<string> Mastermind::generateComputerCode() {
    srand(time(0));

    //takes 4 different values from here into a vector
    vector<string> colors = {"red", "blue", "orange", "green", "yellow", "white"};
    for(int i=0; i < 4; i++) {
        int j = rand() % colors.size();

        computerCode.push_back(colors[j]);
    }

    return computerCode;
}

//checks to se eif the code is true or false
bool Mastermind::checkCode() {
    for(int i =0; i < 4; i++) {
        if(userCode[i] != computerCode[i]) {
            return false;
        }
    }
    return true;
}

//sends the user feedback back
void Mastermind::sendFeedback() {
    int blackScore = 0;
    int whiteScore = 0;

    //checks the white score
    for (int i = 0; i < 4; i++) {
        if (userCode[i] == computerCode[i]) {
            blackScore++;
        }
    }

    //check to see which ones they have put in
    int secretCode[6] = {0, 0, 0, 0, 0, 0};
    int realCode[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
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

        //gets values for the real code
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
        //set the white score if it is less then the secret code
        if(realCode[i] < secretCode[i]) {
            whiteScore += realCode[i];
        } else {
            whiteScore += secretCode[i];
        }

    }
    //sets the black score
    blackPegs = blackScore;
    whitePegs = whiteScore;

    //counts the white pegs
    whitePegs = whitePegs - blackPegs;
    cout << "B: " << blackPegs << " W: " << whitePegs << endl;
    }










