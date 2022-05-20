#include <string>
using namespace std;

class Credit_Card {

private:
	string cCardNo;
	string cCardExdate;
	double creditlimit;

public:
	void setCcardDetails(string cn, string ce, double climit);
	void displayCcardDetails();

};
