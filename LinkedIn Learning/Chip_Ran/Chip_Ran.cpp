#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;


string FindPlayerName(string names[], bool playerTurn);

int main()
{
    //variable
    bool player1Turn = true;
    bool contin = true;

    int chipsInPile = 0;
    int chipsTaken = 0;
    int chipsMax = 0;

    string playerName[2];
    cout << "Player 1, enter your name: \n";
    cin >> playerName[0];
    cout << "Player 2, enter your name: \n";
    cin >> playerName[1];
    cout << "Thanks and good luck!";

    while (contin)
    {
        //seed rng
        srand(time(0));

        chipsInPile = (rand() % MAX_CHIPS) + 1;

        cout << "This round will start with " << chipsInPile << " chip in pile\n";
        bool gameOver = false;

        while (!gameOver)
        {
            chipsMax = chipsInPile * MAX_TURN;
            do
            {
//                if (player1Turn)
//                {
                cout << FindPlayerName(playerName, player1Turn) << ", How many chips would you like to take?\n";
//                }
//                else
//                {
//                    cout << playerName[1] << ", How many chips would you like to take?\n";
//                }

                cout << "You can only take ";
                if (chipsMax == 0)
                {
                    cout << "1\n";
                }
                else
                {
                    cout << chipsMax << endl;
                }

                cin >> chipsTaken;
            } while (chipsTaken > (chipsMax && (chipsInPile > 1)));

            chipsInPile -= chipsTaken;
            cout << "There are " << chipsInPile << " left in the piles\n";

            if (chipsInPile == 0)
            {
                gameOver = true;
//                if (player1Turn)
//                {
                cout << FindPlayerName(playerName, player1Turn) << ", you win!\n";
//                }
//                else
//                {
//                    cout << playerName[0] << ", you win!\n";
//                }
            }
            else
            {
                player1Turn = !player1Turn;
            }
        }
        cout << "Would you people like to play again?\n";
        cout << "Type \"1\" Continue\n";
        cout << "Type \"2\" to Exit\n";

        int input = 0;
        bool validInput = false;

        while (!validInput)
        {
            cin >> input;
            if (input == 1)
            {
                validInput = true;
                contin = true;
            }
            else if (input == 2)
            {
                validInput = true;
                contin = false;
            }
        }
    }
}

string FindPlayerName(string names[], bool playerTurn)
{
    if (playerTurn == true)
    {
        return names[0];
    }
    else
    {
        return names[1];
    }
}