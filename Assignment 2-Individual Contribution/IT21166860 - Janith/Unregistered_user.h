#include <string>
using namespace std;

class Unregistered_user
{
private:

	int newUserID;
	string newName;
	string newEmail;
	string newAddress;
	string newNIC;
	string  newUserPSW;
	int newAccountNo;

public:
	void setnewuserdetails(int newuserid, string newname, string neweamail, string newaddress, string newnic, string newpsw, int newaccountno);
	void displaynewuserdetails();

};