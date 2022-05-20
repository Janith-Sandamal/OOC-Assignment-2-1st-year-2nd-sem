#include <string>
using namespace std;
class Fixed_Account
{

protected:
	int fixedaccountNo;
	string fixedaccountBranch;
	string currencyType;
	float fixedaccountBalance;

public:
	void setfixedDetails(int faccountno, string faccountbranch, string currancytype, float fixedaccountbalance);
	void displayfixedDetails();

};