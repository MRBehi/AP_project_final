#ifndef DECK_H
#define DECK_H

#include <QVector>
#include <algorithm>
#include <random>
#include "Card.h"

class Deck {
public:
    QVector<Card> cards;

    Deck();
    void shuffle();
    Card draw();
    bool isEmpty() const;
};

#endif // DECK_H
