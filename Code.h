//
// Created by Jeffrey Hunt on 2/10/21.
//

#ifndef MASTERMIND_CODE_H
#define MASTERMIND_CODE_H
#include <ctime>
#include <vector>
#include <string>

using namespace std;



class Code {
private:
    string color;

public:
    Code();
    string getColor();
};


#endif //MASTERMIND_CODE_H
