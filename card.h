#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QPushButton>

class Card : public QPushButton
{
    Q_OBJECT
public:
    enum Type { Diamond, Gold, Dollar, Coin };
    enum Rank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
                Soldier, Queen, King, Bitcoin };

    Card(Type type, Rank rank, QWidget *parent = nullptr);

    Type type() const;
    Rank rank() const;
    QString name() const;

    void setFaceUp(bool);
    bool isFaceUp() const;

private:
    Type m_type;
    Rank m_rank;
    bool m_faceUp;

    void updateAppearance();
};

#endif // CARD_H
