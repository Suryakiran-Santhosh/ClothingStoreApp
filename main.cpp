/*
Clothing Company Price Calculator
By: Suryakiran Santhosh
*/

#include <iostream>
using namespace std;

#include "calculatePrice.cpp"

int main()
{
    char choice;
    double totalPrice;
    const double perLetterPrice = 0.20;

    do
    {
        cout << "\nCUSTOM T-SHIRT MESSAGE PRICE CALCULATOR\n"
             << "-----------------------------------------\n"
             << "1) Calculate the Price of a T - shirt\n"
             << "Q) Quit\n"
             << "Please make a selection : ";
        cin >> choice;

        if (choice == '1')
        {
            char shirtSize;
            int numLetters;
            cout << "Enter the size of the T-shirt (S, M or L)." << endl;
            cin >> shirtSize;

            while (shirtSize != 'S' && shirtSize != 's' &&
                   shirtSize != 'M' && shirtSize != 'm' && shirtSize != 'L' &&
                   shirtSize != 'l')
            {
                cout << "Invalid entry. Enter the size of the T-shirt (S, M or L)." << endl;
                cin >> shirtSize;
            }

            cout << "Enter the number of letters you would like to have for the custom message on your T-shirt." << endl;
            cin >> numLetters;

            while (numLetters < 0 || numLetters > 200)
            {
                cout << "Invalid entry. The number can be as little as 0 and as much as 200." << endl
                     << "Enter the number of letters you would like to have for the custom message on your T - shirt." << endl;
                cin >> numLetters;
            }

            totalPrice = calculatePrice(shirtSize, numLetters, perLetterPrice);

            cout << "\nYOUR CUSTOM T-SHIRT PRICE\n"
                 << "-------------------------\n"
                 << "T-SHIRT SIZE: " << shirtSize
                 << "\nNUM LETTERS: " << numLetters
                 << "\nT-SHIRT PRICE $" << totalPrice << endl;
        }
        else if (choice == 'Q' || choice == 'q')
        {
            cout << "\nYou have chosen to quit. Thank you for using the program." << endl
                 << endl;
        }
        else
        {
            cout << "\nInvalid selection." << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    //system("PAUSE");
    return 0;
}