#include <iostream>

using namespace std;

class BankAccount
{
private:
    float balance;
public:
    BankAccount();

    void Deposit(float);
    void Withdraw();
    float getBalance();
};

BankAccount::BankAccount()
{
    balance = 0;

}

float BankAccount::getBalance()
{
    return balance;
}

void BankAccount::Deposit(float input)
{
    balance = balance + input;
}

int main()
{
    BankAccount checking;
    BankAccount saving;

    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Saving balance is: " << saving.getBalance() << endl;

    checking.Deposit(100);
    saving.Deposit(500);
    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Saving balance is: " << saving.getBalance() << endl;
}