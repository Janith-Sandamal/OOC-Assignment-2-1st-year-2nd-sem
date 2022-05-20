class Saving_Account:
{
protected:
	int saccountNo;
	string accountBranch;
	string currencyType;
	double accountBalance;

public:
	void setSavingDetails(int accountNo, string abranch, string ctype, double abalance);
	void displayaccountDetails();
};