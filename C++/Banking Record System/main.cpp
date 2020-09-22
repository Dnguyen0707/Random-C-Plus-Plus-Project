#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

/**
 * Project found on https://www.codewithc.com/banking-record-system-project-c/
 *
 * Goal of this project is to understand what the syntax does. That's why it's pretty much copied
 */
class Bank
{
    //method declaration
public:
    void readData();

    void showData();

    void writeRec();

    void readRec();

    void searchRec();

    void editRec();

    void deleteRec();

    //Attribute
private:
    char accNumber[20];
    char firstName[10];
    char lastName[10];
    float totalBal;
};

/**
 * Take user data and store it
 */
void Bank::readData()
{
    cout << "\nEnter Account Number: ";
    cin >> accNumber;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter Balance: ";
    cin >> totalBal;
    cout << endl;
}

/**
 * Print out user data
 */
void Bank::showData()
{
    cout << "Account number: " << accNumber << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Current Balance: " << totalBal << endl;
    cout << "--------------------------------------------" << endl;
}

/**
 * Write out a file using fstream
 */
void Bank::writeRec()
{
    ofstream outFile;
    outFile.open("Record.bank", ios::binary | ios::app);
    readData();
    outFile.write(reinterpret_cast<char *>(this), sizeof(*this));
    outFile.close();
}

/**
 * Read file using fstream
 */
void Bank::readRec()
{
    ifstream inFile;
    inFile.open("record.bank", ios::binary);
    if (!inFile)
    {
        cout << "Error" << endl;
        return;
    }
    cout << "\n****Data in file****" << endl;
    while (!inFile.eof())
    {
        //error here, not sure why
        if (inFile.read(reinterpret_cast<char *>(this), sizeof(*this)) > 0)
        {
            showData();
        }
    }
    inFile.close();
}

/**
 * Search for account
 */
void Bank::searchRec()
{
    int n;
    ifstream inFile;
    inFile.open("record.bank", ios::binary);
    if (!inFile)
    {
        cout << "\nError" << endl;
        return;
    }
    inFile.seekg(0, ios::end);
    int count = inFile.tellg() / sizeof(*this);
    cout << "\n There are " << count << " record in the file";
    cout << "\n Enter Record Number to Search: ";
    cin >> n;
    inFile.seekg((n - 1) * sizeof(*this));
    inFile.read(reinterpret_cast<char *>(this), sizeof(*this));
    showData();
}

/**
 * edit data
 */
void Bank::editRec()
{
    int n;
    fstream iofile;
    iofile.open("record.bank", ios::in | ios::binary);
    if (!iofile)
    {
        cout << "\nError";
        return;
    }
    iofile.seekg(0, ios::end);
    int count = iofile.tellg() / sizeof(*this);
    cout << "\n There are " << count << " record in the file";
    cout << "\n Enter record number to edit: ";
    cin >> n;
    iofile.seekg((n - 1) * sizeof(*this));
    iofile.read(reinterpret_cast<char *>(this), sizeof(*this));
    cout << "Record " << n << " has the following data" << endl;
    showData();
    iofile.close();
    iofile.open("record.bank", ios::out | ios::in | ios::binary);
    iofile.seekp((n - 1) * sizeof(*this));
    cout << "\nEnter data to modify" << endl;
    readData();
    iofile.write(reinterpret_cast<char *>(this), sizeof(*this));
}

/**
 * Delete data
 */
void Bank::deleteRec()
{
    int n;
    ifstream infile;
    infile.open("record.bank", ios::binary);
    if (!infile)
    {
        cout << "\nError" << endl;
        return;
    }
    infile.seekg(0, ios::end);
    int count = infile.tellg() / sizeof(*this);
    cout << "\n There are " << count << " record in the file";
    cout << "\n Enter Record Number to Delete: ";
    cin >> n;
    fstream tmpfile;
    tmpfile.open("tmpfile.bank", ios::out | ios::binary);
    infile.seekg(0);
    for (int i = 0; i < count; i++)
    {
        infile.read(reinterpret_cast<char *>(this), sizeof(*this));
        if (i == (n - 1))
        {
            continue;
        }
        tmpfile.write(reinterpret_cast<char *>(this), sizeof(*this));
    }

    //file replace
    infile.close();
    tmpfile.close();
    remove("record.bank");
    rename("tmpfile.bank", "record.bank");
}


int main()
{
    Bank A;
    int choice;
    cout << "Account Info System***" << endl;
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
    while (true)
    {
        cout << "Select one option below ";
        cout << "\n\t1-->Add record to file";
        cout << "\n\t2-->Show record from file";
        cout << "\n\t3-->Search Record from file";
        cout << "\n\t4-->Update Record";
        cout << "\n\t5-->Delete Record";
        cout << "\n\t6-->Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                A.writeRec();
                break;
            case 2:
                A.readRec();
                break;
            case 3:
                A.searchRec();
                break;
            case 4:
                A.editRec();
                break;
            case 5:
                A.deleteRec();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Enter correct choice";
                exit(0);

        }
    }

#pragma clang diagnostic pop

    system("pause");
}
