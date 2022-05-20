#include "Bill_Payment.h"
#include <iostream>
#include <string>


int main()
{
	Bill_Payment u1, U2, U3, U4, U5;

	u1.setpaymentDetails("Dialog", "0761452658", 100.00);
	u2.setpaymentDetails("Mobitel", "071562650", 150.00);
	U2.setpaymentDetails("SLT", "0112352626", 3200.00);
	U4.setpaymentDetails("Hutch", "0721452451", 300.00);
	U5.setpaymentDetails("Airtel", "0751452645", 200.00);

	u1.displaypayment();
	U2.displaypayment();
	U3.displaypayment();
	U4.displaypayment();
	U5.displaypayment();
	
	return 0;
}