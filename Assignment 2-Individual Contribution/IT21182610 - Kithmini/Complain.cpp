#include "Complain.h"
#include <string>
#include <iostream>

using namespace std;

void Complain::setComplainDetails(string cname, string cemail, string des, int cn)
{
    cName = cname;
    cEmail = cemail;
    description = des;
    contactNo = cn;
}

void Complain::displaycomplain()
{
    cout << "\nYour Complain here!!\n" << endl;
    cout << "Name: " << cName << endl;
    cout << "Email:  " << cEmail << endl;
    cout << "Contact No: " << contactNo << endl;
    cout << "Complain :\n" << description << endl;
}