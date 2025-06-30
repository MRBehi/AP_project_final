#include "deck.h"

Deck::Deck() {
    for (int v = 1; v <= 13; ++v) {
        cards.append(Card(Suit::Diamond, v));
        cards.append(Card(Suit::Gold, v));
        cards.append(Card(Suit::Coin, v));
        cards.append(Card(Suit::Dollar, v));
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::draw() {
    if (!cards.isEmpty()) {
        return cards.takeLast();
    }
    return Card(Suit::Diamond, -1);
}

bool Deck::isEmpty() const {
    return cards.isEmpty();
}
