#ifndef DECK_H
#define DECK_H

#include <QVector>

#include "card.h"

class Deck
{
public:
    Deck();
    void shuffle();
    Card* deal();
private:
    QVector<Card*> m_cards;
    int m_index;
};

#endif // DECK_H
