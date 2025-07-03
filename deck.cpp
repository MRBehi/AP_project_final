#include "deck.h"
#include <QRandomGenerator>
#include <algorithm>

Deck::Deck() : m_index(0) {
    for (int t = Card::Diamond; t <= Card::Coin; ++t)
        for (int r = Card::Two; r <= Card::Bitcoin; ++r)
            m_cards.append(new Card(Card::Type(t), Card::Rank(r)));
    shuffle();
}

void Deck::shuffle() {
    std::shuffle(m_cards.begin(), m_cards.end(), *QRandomGenerator::global());
    m_index = 0;
}

Card* Deck::deal() {
    return (m_index < m_cards.size()) ? m_cards[m_index++] : nullptr;
}
