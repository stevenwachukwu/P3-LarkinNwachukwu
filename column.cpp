
#include "column.hpp"

int Column::getState() {
    return state;
}

ostream& Column::print (ostream& columnOutput) {
columnOutput << columnNum << colstates[state] << endl;
for(int k = 0; k < columnVal [columnNum]; k++) {
    columnOutput << "--- ----- ---- ----- ----";
    }
}
