//
// Created by Jeffrey Hunt on 2/10/21.
//
#include "Mastermind.h"


Mastermind::Mastermind() {
    playGame();
}

//create instructions on how to win the game.
void Mastermind::instructions() {
    cout << "Welcome to Mastermind" << endl;
    cout << "Here are the Instructions: " << endl;
    cout << " 1. The Computer will generate a Secret code. " << endl;
    cout << " 2. You are given ten tries to guess the Secret code. " << endl;
    cout << " 3. Black Pegs means that you guess the correct color and and in the correct place but not every one is in the correct place." << endl;
    cout << " 4. White pegs mean that you guess the correct color but it was not in the right place." << endl;
    cout << " That is all the hints you get good luck." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void Mastermind::playGame() {
    instructions();


}



