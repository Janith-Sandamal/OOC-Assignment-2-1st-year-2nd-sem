#include "Complain.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Complain u1,u2;

	u1.setComplainDetails("Sunimal Rnasinghe", "sunimalr@gamil.com", "I cant check my loan details", 0765412125);
	u2.setComplainDetails("Sunimal Rnasinghe", "sunimalr@gamil.com", "My credit card is locked. Please unlock", 0765656021);

	u1.displaycomplain();
	u2.displaycomplain();

	return 0;
}