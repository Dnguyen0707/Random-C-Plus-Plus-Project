#include <iostream>
using namespace std;

//function prototype
void printHBD();
void printHBD(string, int&);
int printHBD(string);

int main()
{
    int myAge;

    //first part
//    printHBD();
//    printHBD();
//    cout << "Happy Birthday dear user\n";
//
//    cout << "Enter your age\n";
//    cin >> myAge;
//    cout << "1. My age is: " << myAge << endl;
//    printHBD("Dai", myAge);
//    //after passed by ref
//    cout << "2. My age is: " << myAge << endl;

    //second part
    printHBD();
    printHBD();
    cout << "Happy Birthday dear user\n";
    cout << printHBD("Dai");

    myAge = printHBD("Dai");
}
void printHBD()
{
    cout << "Happy Birthday to you\n";

}
void printHBD(string user, int& age)
{
    cout << "Happy Birtday to " << user << endl;
    age = age + 10;
}
int printHBD(string user)
{
    int myAge;
    cout << "Happy Birtday to " << user << endl;
    cout << "Enter your age\n";
    cin >> myAge;
    return myAge;
}