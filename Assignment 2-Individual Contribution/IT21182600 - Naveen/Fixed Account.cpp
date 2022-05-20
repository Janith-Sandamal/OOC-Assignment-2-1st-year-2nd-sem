#include "Fixed Account.h"
#include <iostream>
#include <cstring>

using namespace std;


void Fixed_Account::setfixedDetails(int faccountno, string faccounntbranch, string currancytype, float fixedaccountbalance)
{

	fixedaccountNo = faccountno;
	fixedaccountBranch = faccounntbranch;
	currencyType = currancytype;
	fixedaccountBalance = fixedaccountbalance;

}

void Fixed_Account::displayfixedDetails()
{

	cout << "\nSummary of Fixed Deposit" << endl << endl;
	cout << "Account No: " << fixedaccountNo << endl;
	cout << "Branch: " << fixedaccountBranch << endl;
	cout << "Currency Type: " << currencyType << endl;
	cout << "Account Balance: " << fixed << setprecision(2) << fixedaccountBalance << endl;

}
