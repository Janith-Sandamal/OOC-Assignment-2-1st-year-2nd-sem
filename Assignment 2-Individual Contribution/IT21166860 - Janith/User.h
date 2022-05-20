#include <string>

class User
{
private:
	int userID;
	std::string userPSW;

public:
	void setUserDetails(int pUserID, string uPSW);
	void displayUserDetails();
};
