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

void Mastermind::generateComputerCode() {
    srand(time(0));

    vector<string> choices = {"red","blue", "green", "orange", "yellow", "pink"};

    for(int i=0; i < 4; i++) {

    }
}








