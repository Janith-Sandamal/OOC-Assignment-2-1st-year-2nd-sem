#include <iostream>
#include "Bill_Payment.h"
#include <string>


void Bill_Payment::setpaymentDetails(string ptype, int ref, double payamount)
{
    paymentType = ptype;
    referenceNo = ref;
    paymentAmount = payamount;
}

void Bill_Payment::displaypayment()
{
    cout << "\nPayment Type/Provider: " << paymentType << endl;
    cout << "\nReference/Mobile No: " << referenceNo << endl;
    cout << "\nPayment Amount: " << fixed << setprecision(2) << paymentAmount << endl;
}