#include "Vacancy.h"
#include <string>
#include <iostream>

using namespace std;

void Vacancy::setVacancyDetails(string vname, string vdes, int vid)
{
	vacancyName = vname;
	vacancydescription = vdes;
	vacancyID = vid;
}

void Vacancy::displayvacancyDetails()
{
	cout << "\nVacancy ID: " << vacancyID << endl;
	cout << "\nVacany Name: " << vacancyName << endl;
	cout << "\nVacancy Description:	" << vacancydescription << endl;
	cout << "\n\n		Apply Now!!	\n\n" << endl;
}
