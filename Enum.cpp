#include "Enum.hpp"
#include "tools.hpp"
#include <iostream>
// Define the array of strings for enum output
//const string colorStrings[] = { "white", "orange", "yellow", "green", "blue"/*, "red" */ };

// Function to input ECcolor enum
ECcolor inputColor() {
    char choice;
    cout << "Select a color (White,Orange,Yellow,Green,Blue): ";
    cin >> choice;
    switch (choice) {
        case 'w': case 'W': return ECcolor::white;
        case 'o': case 'O': return ECcolor::orange;
        case 'y': case 'Y': return ECcolor::yellow;
        case 'g': case 'G': return ECcolor::green;
        case 'b': case 'B': return ECcolor::blue;
        case 'r': case 'R': return ECcolor::red;

        default:
            fatal("Invalid color choice. Defaulting to white.");
            return ECcolor::white;
    }
}
//Function to convert ECcolor enum to string
string colorToString(ECcolor color) {
    return colorStrings[static_cast<int>(color)];
}
