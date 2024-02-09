#include "Player.hpp"
Player::Player(string playerName, ECcolor color):playerName(playerName) , colorVal(color) {

} //the constructor for player

ostream& Player::print(ostream& playerOutput) {
    playerOutput << "Player Name: " << playerName << endl;
    playerOutput << "Player's color: " << colorStrings[(int)colorVal] << endl;
    playerOutput << "Player's score: " << score << endl;
    playerOutput << "The scoreboard: " << scoreboard[0,1,2] << endl;
    return playerOutput;
} //print function to output the player's information

ECcolor Player::color() {
    return colorVal;
} //accessor function for color

int Player::getScore() {
    return score;
} //accessor function for the score

bool Player::wonColumn(int colNum) {
    scoreboard[score] = colNum;
    score++;
    if (colNum >= 3) {
        cout << "You won!" << endl;
        return true;
    }
    else {

        cout << "Not Yet!" << endl;
        return false;
    }
}
