#include "Registered_user.h"
#include <iostream>
#include <string>

using namespace std;

void Registered_user::setDetails(int pUserID, std::string pName, std::string pEmail, std::string  pAddress, std::string  pNIC, int pAccountNo)
{
	userID = pUserID;
	uName = pName;
	uEmail = pEmail;
	uAddress = pAddress;
	uNIC = pNIC;
	accountNo = pAccountNo;
}

void Registered_user::displayUserDetails()
{
	cout << "User ID: " << userID << endl << endl;
	cout << "Name: " << uName << endl << endl;
	cout << "Email: " << uEmail << endl << endl;
	cout << "Address: " << uAddress << endl << endl;
	cout << "NIC : " << uNIC << endl << endl;
	cout << "Account No: " << accountNo << endl << endl;
}
