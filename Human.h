#ifndef HUMAN_H
#define HUMAN_H
#include "Referee.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class Human
{
    public:
        Human();
        string move();
        char setMove();
        char getMove();

};
#endif //Human_h
