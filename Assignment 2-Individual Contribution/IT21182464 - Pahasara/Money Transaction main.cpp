#include <iostream>
#include <string>
#include "Money_Transaction.h"

using namespace std;

int main()
{
	Money_Transaction u1;
	u1.setTransactionDetails("BOC","Malabe",45952, 1800102022, 12000.00);
	u1.displayTransaction();

	return 0;
}