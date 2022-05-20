#include "User.h"
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	User u1, u2, u3, u4, u5;

	u1.setUserDetails(1001, "Janith@123");
	u2.setUserDetails(1002, "Pahasara@123");
	u3.setUserDetails(1003, "Dinuka@123");
	u4.setUserDetails(1004, "Naveen@123");
	u5.setUserDetails(1005, "Kithmin@123");

	u1.displayUserDetails();
	u2.displayUserDetails();
	u3.displayUserDetails();
	u4.displayUserDetails();
	u5.displayUserDetails();

	return 0;
}