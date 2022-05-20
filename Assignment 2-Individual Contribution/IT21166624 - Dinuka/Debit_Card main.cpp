#include "Debit_Card.h"
#include <iostream>

using namespace std;

int main()
{

	Debit_Card u1, u2, u3, u4, u5;

	u1.setDebitCardDetails("4565 4895 1265 4856", "03 / 25");
	u2.setDebitCardDetails("4885 4845 1565 4886", "03 / 23");
	u3.setDebitCardDetails("4525 4855 7265 9856", "02 / 25");
	u4.setDebitCardDetails("4865 5895 1225 4896", "03 / 26");
	u5.setDebitCardDetails("4885 4895 5265 4876", "03 / 25");

	u1.displayDcardDetails();
	u2.displayDcardDetails();
	u3.displayDcardDetails();
	u4.displayDcardDetails();
	u5.displayDcardDetails();

	return 0;
}