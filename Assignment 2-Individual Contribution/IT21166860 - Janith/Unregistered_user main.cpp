#include "Unregistered_user.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Unregistered_user newuser;

	newuser.setnewuserdetails(1006, "Kasun Rajitha", "rajitha@gamail.com", "No/21, rathgama Rd, Galle.", "984535411V", 120018006);
	newuser.displaynewuserdetails();

	return 0;
}