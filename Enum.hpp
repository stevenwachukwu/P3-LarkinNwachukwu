
#ifndef ENUMS_H
#define ENUMS_H
#include "tools.hpp"


enum class ECcolor {
    white,orange,yellow,green,blue,red
    /*,red Red is the Error color */
};
const string colorStrings[] = { "White", "Orange", "Yellow", "Green", "Blue", "Red"};
ECcolor inputColor();
string colorToString(ECcolor color);

enum class MarkerColor {
    white, orange, yellow, green, blue
};
const string MarkerColorStrings[] = {"White", "Orange", "Yellow", "Green", "Blue"};
MarkerColor outputColor();

#endif
