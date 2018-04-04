//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.hpp"
#include "Card.hpp"
Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    // TODO: Implement
    cCount = cardCount;
    cSize = cardSize;
    numMax = numberMax;
    deck = new Card*[cCount];
    for(int i = 0; i < cCount; i++) {
        deck[i] = new Card(cSize, numMax);
    }
}

Deck::~Deck()
{
    // TODO: Implement
       for(int i = 0; i < cSize; i++) {
        delete[] deck[i];
    }
    delete[] deck;
}

void Deck::print(std::ostream& out) const
{
    // TODO: Implement
  for (int i = 0; i < cCount; i++) {
      deck[cardIndex]->theCardprint(out);
  }
}

void Deck::print(std::ostream& out, int cardIndex) const
{
    // TODO: Implement
    deck[cardIndex]->theCardprint(out);
}




