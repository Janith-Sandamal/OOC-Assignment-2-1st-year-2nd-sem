#include "Vacancy.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Vacancy v1, v2, v3;

	v1.setVacancyDetails("Bank Trainee", "\n\n5 > C Passes or Credit Passes in O/L exam.including C pass (Minimum) in English Language \nAge limi: 18-24 years\n", 10001);
	v2.setVacancyDetails("Office Guard", "\n\n5 > C Passes or Credit Passes in O/L exam. \nAge limi: 45-65 years\n", 10002);
	v3.setVacancyDetails("Area Manager", "\n\nCompleted CIMA (Up to Operational-Level)\nCompleted CIM (UK)  (up to Diploma-Level)\nCompleted IABF  (at IBSL -Institute of #Bankers of Sri-Lanka)\nAAT- Passed Finalist.\nAge limi: below 24\n", 10003);

	v1.displayvacancyDetails();
	v2.displayvacancyDetails();
	v3.displayvacancyDetails();

	return 0;
}