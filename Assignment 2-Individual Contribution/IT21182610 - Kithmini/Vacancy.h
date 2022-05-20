#include <string>

using namespace std;

class Vacancy {

private:
	string vacancyName;
	string vacancydescription;
	int vacancyID;

public:
	void setVacancyDetails(string vname, string vdes, int vid);
	void displayvacancyDetails();

};