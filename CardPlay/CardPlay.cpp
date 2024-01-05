// CardPlay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

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
void PrintDeck(const std::array <Card, 52>& pDeck);
void SwapCard(Card& a, Card& b);
int  getRandomNumber(int min, int max);
void shuffleDeck(std::array <Card, 52>& pDeck);
void FillDeck(std::array <Card, 52>& pDeck);
int  getCardValue(std::array <Card, 52>& pDeck, int index);

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    std::array<Card, 52> deck;

    FillDeck(deck);
    PrintDeck(deck);
    shuffleDeck(deck);
    std::cout << "\nCards shuffled!\n\n";
    PrintDeck(deck);
    
}

void FillDeck(std::array <Card, 52>& pDeck)
{
    Card temp{};

    int card = 0;

    for (int i = 0; i < CardSuit::COUNT_SUITS; i++)
    {
        for (int j = 0; j < CardRank::COUNT_ENUM_VALUE; j++)
        {
            temp.suit = static_cast<CardSuit>(i);
            temp.value = static_cast<CardRank>(j);
            pDeck[card++] = temp;
        }
    }
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
    case VALET:	    std::cout << "V"; break;
    case DAMA:	    std::cout << "D"; break;
    case KOROL:	    std::cout << "K"; break;
    case TUZ:		std::cout << "T"; break;
    }

    switch (pointer.suit)
    {
    case KRESTI:	std::cout << "TR"; break;
    case BUBI:	    std::cout << "B"; break;
    case CHERVI:	std::cout << "CH"; break;
    case VINI:	    std::cout << "P"; break;
    }
}

void PrintDeck(const std::array <Card, 52>& pDeck)
{
    for (const auto &element : pDeck)
    {
        std::cout << "Suit - " << static_cast<CardSuit>(element.suit) << " Value - " << static_cast<CardRank>(element.value) << std::endl;
    }
}

void SwapCard(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}

int getRandomNumber(int min, int max)
{
    const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array <Card, 52>& pDeck)
{
    for (int i = 0; i < quantity_Cards; i++)
    {
        int res = getRandomNumber(1, 10);

        res = getRandomNumber(0, 51);

        SwapCard(pDeck.at(i), pDeck.at(res));
    }
}

int getCardValue(std::array <Card, 52>& pDeck, int index)
{
    Card temp;

    temp = pDeck.at(index);

    switch (temp.value)
    {
    case 0: return 2;
    case 1: return 3;
    case 2: return 4;
    case 3: return 5;
    case 4: return 6;
    case 5: return 7;
    case 6: return 8;
    case 7: return 9;
    case 8: return 10;
    case 9: return 10;//VAL
    case 10:return 10;//DAMA
    case 11:return 10;//KOROL
    case 12:return 11;//TUZ
    
    default:
        break;
    }
        
    
    return 0;
}

int Playing(std::array <Card, 52>& pDeck)
{
    Card* cardPtr;
    int player_res;
    int dialog_per;

    while (player_res < 21)
    {
        std::cout << "Берешь карту? 1 - да, 0 - нет" << std::endl;
        std::cin >> dialog_per;
        
        if (dialog_per == 1)
        {
            shuffleDeck(pDeck);
            int rand_index = getRandomNumber(0, 51);
            rand_index = getRandomNumber(0, 51);
            player_res = getCardValue
        }
        if (dialog_per == 0)
            return 0;
    }

    delete cardPtr;
    cardPtr = 0;
    return -1;//fail
}