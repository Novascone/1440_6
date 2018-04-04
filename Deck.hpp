//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>
#include "Card.hpp"

// TODO: Extend this definition as you see fit

class Deck {
private:
    Card** deck;
    int cSize; 
    int cCount;
    int numMax;
    int cardIndex;
public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;
};

#endif //