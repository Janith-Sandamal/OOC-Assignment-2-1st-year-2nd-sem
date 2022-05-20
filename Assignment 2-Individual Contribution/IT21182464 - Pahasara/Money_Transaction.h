#include <string>
using namespace std;

class Money_Transaction {

protected:
	string bankName;
	string branchName;
	int myReference;
	int recieverAccountNo;
	double transferAmount;

public:
	void setTransactionDetails(string bname, string brname, int myref, int raccountno, double tramount);
	void displayTransaction();
};
