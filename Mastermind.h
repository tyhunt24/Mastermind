//
// Created by Jeffrey Hunt on 2/10/21.
// This is all my own work with help from the instructor and internet

#ifndef MASTERMIND_MASTERMIND_H
#define MASTERMIND_MASTERMIND_H
#include "Code.h"
#include <iostream>
#include <ctime>
#include <String>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

class Mastermind {
private:
    vector<string> userCode;
    vector<string> computerCode;
    int whitePegs;
    int blackPegs;
public:
    vector<string> generateComputerCode();
    vector<string> getUserCode(const string& input1, const string& input2, const string& input3, const string& input4);
    bool checkCode();
    void sendFeedback();


};
#endif //MASTERMIND_MASTERMIND_H
