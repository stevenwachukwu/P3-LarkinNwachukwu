/*Written by Steve Nwachukwu and Nick Larkin*/
#ifndef dice
#define dice

#include "tools.hpp"

class Dice {
private:
    int nDice;
    int* diceVal;

public:
    Dice(int n);
    ~Dice();
    ostream& print(ostream&);
    const int* roll();
};
#endif
