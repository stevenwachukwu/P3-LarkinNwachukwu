
#include "column.hpp"

Column::Column(int columnNum):columnNum(columnNum) {}

Column::~Column(){}

int Column::getState() {
    return state;
}
void Column::bust() {
    //bust function
}
bool Column::move() {
    // Check if any player has a tile in this column
    bool playerHasTile = false;
    for (int i = 0; i < 5; ++i) {
        if (columnMarker[i] != -1) {
            playerHasTile = true;
            break;
        }
    }

    ostream& Column::print (ostream& columnOutput) {
        columnOutput << columnNum << " " << colstates[state] << " T";
        for (int k = 0; k < columnVal[columnNum]; k++) {
            columnOutput << "-";
            for (int j = 0; j < 5; j++) {
                if (columnMarker[j] == k) {
                    columnOutput << MarkerColorStrings[j];
                }

                bool Column::startTower(Player * player) {
                    // Check if the player has a tile in this column
                    if (columnMarker[player->getPlayerNumber()] != -1) {
                        // Player already has a tile in this column, find the next available square
                        int nextSquare = columnMarker[player->getPlayerNumber()] +1;

                        // Check if moving to the next square would capture the column
                        if (nextSquare == columnVal[columnNum]) {
                            // Move would capture the column, set state to pending
                            state = PENDING;
                            return false;
                        }

                        // Move tower to the next square
                        columnMarker[player->getPlayerNumber()] = nextSquare;
                    } else {
                        // Player has no tile in this column, place tower at position 1
                        columnMarker[player->getPlayerNumber()] = 0;
                    }

                    return true;
                }
                if (!playerHasTile) {
                    // No player has a tile in this column, cannot move
                    return false;
                }

                // Find the highest position in this column
                int highestPosition = -1;
                for (int i = 0; i < 5; ++i) {
                    if (columnMarker[i] > highestPosition) {
                        highestPosition = columnMarker[i];
                    }
                }

                // Check if moving one square ahead would capture the column
                if (highestPosition + 1 == columnVal[columnNum]) {
                    // Move would capture the column, set state to pending
                    state = Pending;
                    return false;
                }

                // Move the tower one square ahead
                for (int i = 0; i < 5; ++i) {
                    if (columnMarker[i] != -1) {
                        columnMarker[i]++;
                    }
                }

                return true;
            }
        }


        void Column::stop(Player * player) {
            // Get the color of the player's tiles
            string tileColor = player->Color();

            // Replace the tower with the appropriate colored tile
            for (int i = 0; i < 5; ++i) {
                if (columnMarker[i] != -1) {
                    columnMarker[i] = -1; // Remove the tower
                    // Add the colored tile at the highest position
                    columnMarker[i] = columnVal[columnNum] - 1;
                    MarkerColorStrings[columnNum] = tileColor;
                    break; // Stop after replacing one tower
                }
            }

            // If the column state is pending, set it to captured and call Player::wonColumn()
            if (state == Pending) {
                state = Captured;
                player->wonColumn();
            }
        }
    }
    return columnNum;
}
