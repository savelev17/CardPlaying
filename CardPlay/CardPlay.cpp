// CardPlay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
const int quantity_Cards = 52;//52/4 = 13

const int quantity_Sqwads = 13;

const int sqwads = 4;

enum CardRank
{
    TWO,
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
    switch (pointer.value)
    {
    case TWO:		std::cout << "2"; break;
    case THREE:		std::cout << "3"; break;
    case FOUR:		std::cout << "4"; break;
    case FIVE:		std::cout << "5"; break;
    case SIX:		std::cout << "6"; break;
    case SEVEN:		std::cout << "7"; break;
    case EIGHT:		std::cout << "8"; break;
    case NINE:		std::cout << "9"; break;
    case TEN:		std::cout << "T"; break;
    case VALET:	std::cout << "V"; break;
    case DAMA:	        std::cout << "D"; break;
    case KOROL:	std::cout << "K"; break;
    case TUZ:		std::cout << "T"; break;
    }

    switch (pointer.suit)
    {
    case KRESTI:	std::cout << "TR"; break;
    case BUBI:	std::cout << "B"; break;
    case CHERVI:	std::cout << "CH"; break;
    case VINI:	        std::cout << "P"; break;
    }
}

