#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <ostream>

class Card {
private:
    int size;
    int numMax;
    int** cardVals;
public:
    Card(int cardSize, int numberMax);
    ~Card();

    void theCardprint(std::ostream& out) const;
};

#endif