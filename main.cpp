#include <iostream>
#include <fstream>
#include "dice.hpp"
#include "Player.hpp"
#include "tools.hpp"
#include "Enum.hpp"


void UnitDice (){
    srand(time(nullptr)); // random number each time

    // Testing all numbers from 1 to 10
    int nDice = rand() % 10 + 1  ;
    banner() ;
    ofstream Diceroll("Diceroll.txt",ios::app);
    // Testing if open
    if (!Diceroll.is_open()) {
        fatal( "Could not open Dice.Txt file");
    }

    Dice rolling(nDice);
    Diceroll << "And your rolls are:" << endl;
    const int* Rollnum = rolling.roll();
    //rolling.print(Diceroll);
    Diceroll << endl;
    // cout << "Now" << rolling << endl ;
    Diceroll.close();
}

void UnitPlayer () {
    Player playerVal ( "Jeff", ECcolor::green );
    for (int i=0; i < 3; i++)
    {
        cout << playerVal;
        playerVal.wonColumn(7);
    }

}


int main() {
    // UnitDice();
    // bye();
    UnitPlayer();
    return 0;
}
