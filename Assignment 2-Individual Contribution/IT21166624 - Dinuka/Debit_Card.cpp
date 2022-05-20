#include "Debit_Card.h"
#include <iostream>

using namespace std;

void Debit_Card::setDebitCardDetails(int dn, int de)
{
	dCardNo = dn;
	dCardExdate = de;
}

void Debit_Card::displayDcardDetails()
{
	cout << "\nYour Debit Card Details Here!!\n " << endl;
	cout << "Card Number: " << dCardNo << endl;
	cout << "Card Expire Date: " << dCardExdate << endl;
}
