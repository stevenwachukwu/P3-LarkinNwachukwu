#ifndef player
#define player
#include "Enum.hpp"
#include "tools.hpp"

class Player {
private:
    string playerName;
    ECcolor colorVal;
    int score = 0;
    int scoreboard [3] = {1,2,3};


public:
    Player(string playerName, ECcolor color);
    ECcolor color();
    ~Player() = default;
    ostream& print(ostream& playerOutput);
    int getScore();
    bool wonColumn(int colNum);
};
inline ostream& operator << (ostream&  output, Player& p) {return p.print(output);}
#endif
