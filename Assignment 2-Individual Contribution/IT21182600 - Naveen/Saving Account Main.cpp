#include "Saving_Account.h"
#include <isotream>
#include <cstring>

using namespace std;

int main()
{
	Saving_Account u1, u2, u3, u4, u5;

	u1.setSavingDetails(120018001, "Kirulapana", "LKR", 56500.35);
	u2.setSavingDetails(120018002, "Hakmana", "LKR", 6500.35);
	u3.setSavingDetails(120018003, "Panadura", "LKR", 156500.45);
	u4.setSavingDetails(120018004, "Battaramulla", "LKR", 31507.85);
	u5.setSavingDetails(120018005, "Matara", "LKR", 5100.35);

	u1.displayaccountDetails();
	u2.displayaccountDetails();
	u3.displayaccountDetails();
	u4.displayaccountDetails();
	u5.displayaccountDetails();

	return 0;
}