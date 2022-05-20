#include <string>
using namespace std;

class Bill_Payment 
{
private:
	string paymentType;
	int referenceNo;
	double paymentAmount;

public:
	void setpaymentDetails(string ptype, int ref, double payamount);
	void displaypayment();

};