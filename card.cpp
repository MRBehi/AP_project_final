#include "card.h"
#include <QIcon>
#include <QPixmap>

Card::Card(Type type, Rank rank, QWidget *parent)
    : QPushButton(parent), m_type(type), m_rank(rank), m_faceUp(false)
{
    setFixedSize(80, 120);
    updateAppearance();
}

Card::Type Card::type() const { return m_type; }
Card::Rank Card::rank() const { return m_rank; }

QString Card::name() const {
    static const QStringList types = {"diamond","gold","dollar","coin"};
    static const QStringList ranks = {
                                      "", "", "2","3","4","5","6","7","8","9","10",
                                      "soldier","queen","king","bitcoin"};
    return ranks[m_rank] + "_" + types[m_type];
}

void Card::setFaceUp(bool faceUp) {
    m_faceUp = faceUp;
    updateAppearance();
}

bool Card::isFaceUp() const { return m_faceUp; }

void Card::updateAppearance() {
    if (m_faceUp) {
        // To be filled with your card image URL from resource
        setIcon(QIcon(QPixmap("")));
    } else {
        setIcon(QIcon(QPixmap(":/cards/back.png")));
    }
    setIconSize(size());
}
