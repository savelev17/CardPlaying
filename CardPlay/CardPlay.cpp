// CardPlay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
const int quantity_Cards = 52;//52/4 = 13

const int quantity_Sqwads = 13;

const int sqwads = 4;

enum Value
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

enum Suit
{
    BUBI,
    CHERVI,
    VINI,
    KRESTI,

    COUNT_SUITS
};

struct Card
{
    Value value;
    Suit suit;
};

void Print(const Card& pointer);

std::array<Card, 52>;

int main()
{

    std::cout << "Hello World!\n";
}

void Print(const Card& pointer)
{
    std::cout << "Масть " << pointer.suit << std::endl;
    std::cout << "Достоинство " << pointer.value << std::endl;
}

void Fill_Array(const std::array<Card, quantity_Cards>& array_p)
{
    int counter = 0;
    Value value;
    Suit suit;

    for (int i = 0; i < quantity_Sqwads; i++)
    {
        for (int j = 0; j < sqwads; j++)
        {
            
        }
    }
}