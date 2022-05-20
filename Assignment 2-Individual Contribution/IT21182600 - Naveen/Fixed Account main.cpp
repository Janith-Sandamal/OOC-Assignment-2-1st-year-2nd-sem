#include "Fixed_Account.h"
#include <iostream>
#include <cstring>

using namespace std;

int mian()
{
	Fixed_Account u1, u2, u4;

	u1.setfixedDetails(350060001, "Kirulapana", "LKR", 10000000.00);
	u2.setfixedDetails(350060002, "Matara", "LKR", 1000000.00);
	u4.setfixedDetails(350060004, "Malabe", "LKR", 5000000.00);

	u1.displayfixedDetails();
	u2.displayfixedDetails();
	u4.displayfixedDetails();

	return 0;
}