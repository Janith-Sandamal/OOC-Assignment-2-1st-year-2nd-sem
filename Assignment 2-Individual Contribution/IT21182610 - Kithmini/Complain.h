#include <string>

using namespace std;
class Complain {

protected:
	string cName;
	string cEmail;
	string description;
	int contactNo;

public:
	void setComplainDetails(string cname, string cemail, string des, int cn);
	void displaycomplain();

};
