#include "card.h"

Card::Card(Suit s, int v)
    : suit(s), value(v) {}

QString Card::toString() const {
    QString suitStr;
    switch (suit) {
    case Suit::Diamond: suitStr = "♦️"; break;
    case Suit::Gold:    suitStr = "🪙"; break;
    case Suit::Coin:    suitStr = "💰"; break;
    case Suit::Dollar:  suitStr = "💵"; break;
    }
    return suitStr + QString::number(value);
}
