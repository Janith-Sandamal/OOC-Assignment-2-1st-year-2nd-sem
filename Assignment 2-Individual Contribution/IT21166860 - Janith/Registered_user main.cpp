#include "Registered_user.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Registered_user r1,r2,r3,r4,r5;

	r1.setDetails(1001, "P.G.E.J Sandamal", "sandamal@gmail.com", "No/123/2, Galnawa Rd, Kirulapana.", "200015285697", 120018001);
	r2.setDetails(1002, "R.P.N Arachchi", "pahasra@gmail.com", "Arachchi Niwasa, Allewela Rd, Hakmana. ", "994035512V", 120018002);
	r3.setDetails(1003, "G.A.D Nawod", "dinuka@gmail.com", "No/129 New Kandy Rd, Panadura.", "200054268795", 120018003);
	r4.setDetails(1004, "W.N Dilsara", "naveen@gmail.com", "No/225 Gehan Rd, Thalangama North, Koswatta", "993520411V", 120018004);
	r5.setDetails(1005, "K.S.K Wijesinghe", "kithmini@gmail.com", "Kithmini niwasa,  bandaththara Rd, Matara.", "9938960411V", 120018005);


	r1.displayUserDetails();
	r2.displayUserDetails();
	r3.displayUserDetails();
	r4.displayUserDetails();
	r5.displayUserDetails();
	
	return 0; 
}