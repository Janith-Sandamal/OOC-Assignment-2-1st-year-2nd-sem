#include <iostream>
#include <string>
#include "Money_Transaction.h"

using namespace std;

void Money_Transaction::setTransactionDetails(string bname, string brname, int myref, int raccountno, double tramount)
{
    bankName = bname;
    branchName = brname;
    myReference = myref;
    recieverAccountNo = raccountno;
    transferAmount = tramount;

}

void Money_Transaction::displayTransaction()
{
    cout << "\nCongratulations!! Transaction Successfull\n";
    cout << "\nBank Name: " << bankName << endl;
    cout << "\nBranch Name: " << branchName << endl;
    cout << "\nMy Reference: " << myReference << endl;
    cout << "\nReciever Account No: " << recieverAccountNo << endl;
    cout << "\nTransfer Amount: " << fixed << setprecision(2) << transferAmount << endl;
}