// CardPlay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
const int quantity_Cards = 52;//52/4 = 13

const int quantity_Sqwads = 13;

const int sqwads = 4;

enum CardRank
{
    ONE,
    RWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    VALET,
    DAMA,
    KOROL,
    TUZ,

    COUNT_ENUM_VALUE
};

enum CardSuit
{
    BUBI,
    CHERVI,
    VINI,
    KRESTI,

    COUNT_SUITS
};

struct Card
{
    CardRank value;
    CardSuit suit;
};

void Print(const Card& pointer);


int main()
{
    Card temp{};
    std::array<Card, 52> deck;

    int card = 0;

    for (int i = 0; i < CardSuit::COUNT_SUITS; i++)
    {
        for (int j = 0; j < CardRank::COUNT_ENUM_VALUE; j++)
        {
            temp.suit = static_cast<CardSuit>(j);
            temp.value = static_cast<CardRank>(j);
            deck[card++] = temp;
        }
    }

    std::cout << "Hello World!\n";
}

void Print(const Card& pointer)
{
    std::cout << "Масть " << pointer.suit << std::endl;
    std::cout << "Достоинство " << pointer.value << std::endl;
}

