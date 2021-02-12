//
// Created by Jeffrey Hunt on 2/10/21.
//

#ifndef MASTERMIND_MASTERMIND_H
#define MASTERMIND_MASTERMIND_H
#include "Code.h"
#include <iostream>
#include <ctime>
#include <String>
#include <vector>

using namespace std;


class Mastermind {
private:
    vector<string> code;
public:
    Mastermind();
    void playGame();
    void instructions();
};


#endif //MASTERMIND_MASTERMIND_H
