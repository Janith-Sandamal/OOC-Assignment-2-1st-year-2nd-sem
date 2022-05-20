#include <iostream>
#include <string>
#include "Credit_Card.h"

using namespace std;

int main()
{
	Credit_Card u1, u2, u3, u4;

	u1.setCcardDetails("4585 8956 7845 5656", "04/23", 25000.00);
	u2.setCcardDetails("4515 8556 7885 5656", "04/25", 50000.00);
	u3.setCcardDetails("4995 8985 7847 5546", "11/25", 15000.00);

	u1.displayCcardDetails();
	u2.displayCcardDetails();
	u3.displayCcardDetails();

	retun 0;
}