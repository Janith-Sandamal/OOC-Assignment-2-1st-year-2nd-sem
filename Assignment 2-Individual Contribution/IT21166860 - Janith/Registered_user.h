#include <string>

using namespace std;
class Registered_user
{
private:
	int userID;
	std::string uName;
	std::string uEmail;
	std::string uAddress;
	std::string uNIC;
	int accountNo;;

public:
	void setDetails(int pUserID, std::string pName, std::string pEmail, std::string  pAddress, std::string  pNIC, int pAccountNo);
	void displayUserDetails();
		
};