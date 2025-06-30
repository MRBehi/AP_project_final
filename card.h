#ifndef CARD_H
#define CARD_H

#include <QString>

enum class Suit { Diamond, Gold, Coin, Dollar };

class Card {
public:
    Suit suit;
    int value;

    Card(Suit s, int v);
    QString toString() const;
};

#endif // CARD_H
