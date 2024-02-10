
#include "column.hpp"

Column::Column(int columnNum):columnNum(columnNum) {}

Column::~Column(){}

int Column::getState() {
    return state;
}

ostream& Column::print (ostream& columnOutput) {
columnOutput << columnNum << " " << colstates[state] << " T";
for(int k = 0; k < columnVal [columnNum]; k++) {
    columnOutput << "-";
    for(int j = 0; j < 5; j++) {
           if(columnMarker[j] == k) {
               columnOutput << MarkerColorStrings[j];
           }
        }
    }
    return columnOutput;
}
