#include "Unregistered_user.h"
#include <iostream>
#include <cstring>


void Unregistered_user::setnewuserdetails(int newuserid, string newname, string newemail, string newaddress, string newnic, string newpsw, int newaccountno)
{
	newUserID = newuserid;
	newUserPSW = newpsw;
	newName = newname;
	newEmail = newemail;
	newAddress = newaddress;
	newNIC = newnic;
	newAccountNo = newaccountno;
}

void Unregistered_user::displaynewuserdetails()
{

	cout << "Account Details!!" << endl << endl;
	cout << "User ID: " << newUserID << endl << endl;
	cout << "User Password: " << newUserPSW << endl << endl;
	cout << "User Name: " << newName << endl << endl;
	cout << "User NIC: " << newNIC << endl << endl;
	cout << "User Address: " << newAddress << endl << endl;
	cout << "User Email: " << newEmail << endl << endl;
	cout << "User Account No: " << newAccountNo << endl << endl;
}