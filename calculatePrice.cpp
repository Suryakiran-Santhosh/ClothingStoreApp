/*
Clothing Company Price Calculator
By: Suryakiran Santhosh
*/

#include <iostream>
using namespace std;

double calculatePrice(char size, int letters, double messagePrice)
{
    double price = 0.00;
    double basePriceShirt;
    const double smallShirtPrice = 9.99;
    const double mediumShirtPrice = 10.99;
    const double largeShirtPrice = 11.99;

    if (size == 'S' || size == 's')
    {
        basePriceShirt = smallShirtPrice;
    }
    else if (size == 'M' || size == 'm')
    {
        basePriceShirt = mediumShirtPrice;
    }
    else if (size == 'L' || size == 'l')
    {
        basePriceShirt = largeShirtPrice;
    }

    price = basePriceShirt + (letters * messagePrice);
    return price;
}