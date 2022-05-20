#include "User.h"
#include <iostream>
#include <string>

using namespace std;

void User::setUserDetails(int pUserID, string uPSW)
{
	userID = pUserID;
	userPSW = uPSW;
}

void User::displayUserDetails()
{
	cout << "User ID: " << userID << endl;
	cout << "User Password: " << userPSW << endl;
}


