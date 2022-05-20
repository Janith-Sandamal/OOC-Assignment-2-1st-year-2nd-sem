#include "Saving_Account.h"
#include <isotream>
#include <cstring>

using namespace std;


void Saving_Account::setSavingDetails(int accountNo, string abranch, string ctype, double abalance) 
{

	saccountNo = accountNo;
	accountBranch = abranch;
	currencyType = ctype;
	accountBalance = abalance;

}
void Saving_Account::displayaccountDetails() {

	cout << "\n\nSummary of Saving  account\n" << endl << endl;
	cout << "Account No: " << saccountNo << endl;
	cout << "Branch: " << accountBranch << endl;
	cout << "Currency Type: " << currencyType << endl;
	cout << "Account Balance: " << fixed << setprecision(2) << accountBalance << endl;

}