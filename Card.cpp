#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Card.hpp"

Card::Card(int cardSize, int numberMax) {
    size = cardSize;
    numMax = numberMax;
    int val;
    bool used[numMax + 1];
    for(int i = 0; i <= numMax; i++) {
        used[i] = false;
    }
    used[0] = true;
    cardVals = new int*[size];
    for(int i = 0; i < size; i++) {
        cardVals[i] = new int[size];
        for(int j = 0; j < size; j++) {
            val = rand() % (numberMax + 1);
            while(used[val]) {
                val = rand() % (numberMax + 1);
            }
            cardVals[i][j] = val;
            used[val] = true;
        }
    }
}

Card::~Card() {
    for(int i = 0; i < size; i++) {
        delete[] cardVals[i];
    }
    delete[] cardVals;
}

    void Card::theCardprint(std::ostream& out) const {
    out << "+";
    for(int k = 0; k < size; k++) {
        out << "----+";
    }
    out << std::endl;
    for(int i = 0; i < size; i++) {
        out << "|";
        for(int j = 0; j < size; j++) {
            out << std::setw(3) << cardVals[i][j] << " |";
        }
        out << std::endl << "+";
        for(int k = 0; k < size; k++) {
            out << "----+";
        }
        out << std::endl;
    }
}
