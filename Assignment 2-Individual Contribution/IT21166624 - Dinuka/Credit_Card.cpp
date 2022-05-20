#include <iostream>
#include <string>
#include "Credit_Card.h"

using namespace std;

void Credit_Card::setCcardDetails(string cn, string ce, double climit)
{

	cCardNo = cn;
	cCardExdate = ce;
	creditlimit = climit;

}

void Credit_Card::displayCcardDetails()
{

	cout << "\nYour Credit Card Details!!\n" << endl << endl;
	cout << "Credit Card No: " << cCardNo << endl;
	cout << "Credit Limit Per Month: " << fixed << setprecision(2) << creditlimit << endl;

}
