#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    bool playerTurn = true;
    bool gameOver = false;

    int chipsInPile = 0;
    int chipsTaken = 0;

    cout << "How many chips would you like in your starting piles? \n";

    cin >> chipsInPile;
    cout << "This round will start with " << chipsInPile << " chip in pile\n";
}