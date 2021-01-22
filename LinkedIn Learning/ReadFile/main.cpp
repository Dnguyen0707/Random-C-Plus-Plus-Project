#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inStream;
    inStream.open("passphrase.txt");
    int userGuess = 0;
    string passPhrase;

    if (!inStream.fail())
    {
        while(inStream >> passPhrase)
        {
            cout << "The pass phrase is: " << passPhrase << endl;
            cout << "What is your answer?\n";
            cin >> userGuess;
            if (userGuess == passPhrase.length())
            {
                cout << "Congrat\n";
            }
            else
            {
                cout << "Try later again\n";
            }
        }
    }
    inStream.close();
}
