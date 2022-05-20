#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Registered_user
{
	protected:
		int userID;
		string uName;
		string uEmail;
		string uAddress;
		string uNIC;
		int accountNo;
		
	public:
		void setDetails(int pUserID, string pName, string pEmail, string  pAddress, string  pNIC, int pAccountNo);
		void displayUserDetails(); 
};

class Unregistered_user
{
	private:
		
		int newUserID;
		string newName;
		string newEmail;
		string newAddress;
		string newNIC;
		string  newUserPSW;
		int newAccountNo;
	
	public:
		void setnewuserdetails(int newuserid, string newname, string neweamail, string newaddress, string newnic, string newpsw, int newaccountno);
		void displaynewuserdetails();
	
};

class Debit_Card
{
	
	protected:
		string dCardNo;
		string dCardExdate;
	
	public:
		void setDebitCardDetails(string dn,string de);
		void displayDcardDetails();
};

class Loan{
	
	private:
		int loanNo;
		string loanType;
		double loanAmount;
		
	public:
		void setLoanDetails(int ln,string loantype,double la);
		void displayLoanDetails();
		
};

class Credit_Card{
	
	private:
		string cCardNo;
		string cCardExdate;
		double creditlimit;
		
	public:
	    void setCcardDetails(string cn,string ce,double climit);
		void displayCcardDetails();
			
};


class Saving_Account: public Debit_Card, public Loan, public Credit_Card
{	
	protected:
		int saccountNo;
		string accountBranch;
		string currencyType;
		double accountBalance;
		
	public:
		void setSavingDetails(int accountNo, string abranch,string ctype,double abalance);
		void displayaccountDetails();
		
};

class Fixed_Account
{
	
	protected:
		int fixedaccountNo;
		string fixedaccountBranch;
		string currencyType;
		float fixedaccountBalance;
		
	public:
		void setfixedDetails(int faccountno,string faccountbranch,string currancytype,float fixedaccountbalance);
		void displayfixedDetails();
		
};

class Payment{
	
	protected:
		string paymentType;
		int referenceNo;
		double paymentAmount;
		
	public:
		void setpaymentDetails(string ptype, int ref, double payamount);
		void displaypayment();
		
};

class Money_Transaction{
	
	protected:
		string bankName;
		string branchName;
		int myReference;
		int recieverAccountNo;
		double transferAmount;
		
	public:
		void setTransactionDetails(string bname, string brname, int myref, int raccountno, double tramount);
		void displayTransaction();
		
	
		
};


class Complain{
	
	protected:
		string cName;
		string cEmail;
		string description;
		int contactNo;
		
	public:
		void setComplainDetails(string cname, string cemail, string des,int cn);
		void displaycomplain();
		
};


class User: public Registered_user, public Saving_Account, public Fixed_Account, public  Payment, public Money_Transaction, public  Complain
{
protected :
	int userID;
	string userPSW;

public:
	void setUserDetails(int pUserID, string uPSW);

};

class Vacancy{
	
	private:
		string vacancyName;
		string vacancydescription;
		int vacancyID;
		
	public:
		void setVacancyDetails(string vname, string vdes, int vid );
		void displayvacancyDetails();
		
};

void Registered_user::setDetails(int pUserID, string pName, string pEmail, string  pAddress, string  pNIC, int pAccountNo)
{
	userID = pUserID;
    uName=pName;
    uEmail=pEmail;
    uAddress= pAddress;
    uNIC= pNIC;
	accountNo =pAccountNo;
}

void Registered_user::displayUserDetails()
{

	cout <<"\nLogin Success!!"<<endl<<endl;
	cout << "User ID: "<< userID<<endl <<endl;
	cout <<"Name: " <<uName <<endl <<endl;
	cout <<"Email: "<<uEmail <<endl <<endl;
	cout <<"Address: "<<uAddress <<endl <<endl;
	cout <<"NIC : "<<uNIC <<endl <<endl;
	cout <<"Account No: "<<accountNo <<endl <<endl;
	
}


void User::setUserDetails(int pUserID, string uPSW)
{
	userID=pUserID;
	userPSW=uPSW;
}


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
	cout<<endl<< "Congratulations, Your account has been successfully created. :)"<<endl<<endl;
	
	cout<< "Account Details!!"<<endl<<endl;
	cout << "User ID: "<<newUserID<<endl<<endl;
	cout << "User Password: "<<newUserPSW<<endl<<endl;
	cout << "User Name: "<<newName<<endl<<endl;
	cout << "User NIC: "<<newNIC<<endl<<endl;
	cout << "User Address: "<<newAddress<<endl<<endl;
	cout << "User Email: "<<newEmail<<endl<<endl;
	cout << "User Account No: "<<newAccountNo<<endl<<endl;
	
}
 
 void Saving_Account::setSavingDetails( int accountNo,string abranch,string ctype,double abalance){
	
	saccountNo = accountNo;
	accountBranch = abranch;
	currencyType = ctype;
	accountBalance = abalance;
	
}

void Saving_Account::displayaccountDetails(){
	
	cout << "\n\nSummary of Saving  account\n" << endl << endl;
	cout << "Account No: "<<saccountNo<< endl;
	cout << "Branch: " <<accountBranch << endl;
	cout << "Currency Type: " <<currencyType << endl;
	cout << "Account Balance: "<<fixed << setprecision(2) << accountBalance << endl;
	
}
void Debit_Card::setDebitCardDetails(string dn,string de)
{
	dCardNo = dn;
	dCardExdate = de;
}

void Debit_Card::displayDcardDetails()
{
	cout<<"\nYour Debit Card Details Here!!\n "<<endl;
	cout<<"Card Number: "<<dCardNo<<endl;
	cout<<"Card Expire Date: "<<dCardExdate<<endl;
}

void Loan::setLoanDetails(int ln,string loantype,double la){
	
	loanNo = ln;
	loanType = loantype;
	loanAmount = la;
	
}

void Loan::displayLoanDetails(){
	
	cout << "\nYour Loan Details Here!! \n" << endl << endl;
	cout << "Your Loan Number: "<<loanNo << endl;
	cout << "Loan Type: "<<loanType<< endl;
	cout <<"Loan Amount: "<< fixed << setprecision(2) << loanAmount << endl;
	
}

void Credit_Card::setCcardDetails(string cn, string ce, double climit)
{
	
	    cCardNo = cn;
	    cCardExdate = ce;
	    creditlimit = climit;
	      
}

void Credit_Card::displayCcardDetails()
{
	
	cout << "\nYour Credit Card Details!!\n"  << endl << endl;
	cout << "Credit Card No: "<<cCardNo << endl;
	cout <<"Credit Limit Per Month: "<< fixed << setprecision(2) << creditlimit << endl;
	
}


void Fixed_Account::setfixedDetails(int faccountno,string faccounntbranch,string currancytype,float fixedaccountbalance)
{
	
	fixedaccountNo = faccountno;
	fixedaccountBranch = faccounntbranch;
	currencyType = currancytype;
	fixedaccountBalance = fixedaccountbalance;
	
}

void Fixed_Account::displayfixedDetails()
{
	
	cout << "\nSummary of Fixed Deposit" << endl << endl;
	cout << "Account No: "<<fixedaccountNo << endl;
	cout << "Branch: "<<fixedaccountBranch << endl;
	cout << "Currency Type: "<<currencyType << endl;
	cout << "Account Balance: "<<fixed << setprecision(2) << fixedaccountBalance << endl;
	
}

 void Payment::setpaymentDetails(string ptype, int ref, double payamount)
 {
 	paymentType = ptype;
	referenceNo = ref;
	paymentAmount = payamount;
 }
 
 void Payment::displaypayment()
 {
 	cout << "\nCongratulations!! Payment/Transaction Success Full\n";
 	cout << "\nPayment Type: "<<paymentType<<endl;
 	cout << "\nReference No: "<<referenceNo<<endl;
 	cout << "\nPayment Amount: "<<fixed << setprecision(2) << paymentAmount << endl;
 }
 
 void Money_Transaction::setTransactionDetails(string bname, string brname, int myref, int raccountno, double tramount)
 {
 	bankName = bname;
	branchName = brname;
	myReference = myref;
	recieverAccountNo = raccountno;
	transferAmount = tramount;
		
 }
 
 void Money_Transaction::displayTransaction()
 {
 	cout << "\nCongratulations!! Transaction Successfull\n";
 	cout << "\nBank Name: "<<bankName<<endl;
 	cout << "\nBranch Name: "<<branchName<<endl;
 	cout << "\nMy Reference: "<<myReference<<endl;
 	cout << "\nReciever Account No: "<<recieverAccountNo<<endl;
 	cout << "\nTransfer Amount: "<<fixed << setprecision(2) << transferAmount << endl;
 }
 
 void Complain::setComplainDetails(string cname, string cemail, string des,int cn)
 {
 	cName = cname;
 	cEmail = cemail;
 	description = des;
 	contactNo = cn;
 }
 
 void Complain::displaycomplain()
 {
 	cout <<"\nYour Complain here!!\n"<<endl;
 	cout <<"Name: "<<cName<<endl;
 	cout <<"Email:  "<<cEmail<<endl;
 	cout <<"Contact No: "<<contactNo<<endl;
 	cout <<"Complain :\n"<<description<<endl;
 }
 
 void Vacancy::setVacancyDetails(string vname,string vdes, int vid)
{
	vacancyName = vname;
	vacancydescription = vdes;
	vacancyID = vid;
}

void Vacancy::displayvacancyDetails()
{
	cout <<"\nVacancy ID: "<<vacancyID<<endl;
	cout<<"\nVacany Name: "<<vacancyName<<endl;
	cout <<"\nVacancy Description:	"<<vacancydescription<<endl;
	cout <<"\n\n		Apply Now!!	\n\n" <<endl;
}
 
int main ()
{
	int uID;
	string pw,td,br;
	char nu;
	int x,mn,ra,mr,a=0;
	double amount;
           
	while (a != -1){
	cout << "Enter UserID: ";
	cin>> uID;
	cout << "Enter User Password: ";
	cin >> pw;
	
	User u1,u2,u3,u4,u5;
	Vacancy v1,v2,v3;
	
	if (uID == 1001 && pw == "Janith@123")
	{
		u1.setUserDetails(1001,"Janith@123");
		u1.setDetails(1001,"P.G.E.J Sandamal", "sandamal@gmail.com", "No/123/2, Galnawa Rd, Kirulapana. ","200015285697",120018001);
    	u1.displayUserDetails();
    	cout<<"\nDo you want another service: (Y/N): ";
    	cin>>nu;
    	switch (nu)
    	{
    		case 'Y':
    		case 'y':
    			cout<< "Select: \n1.Saving Account Details\n2.Fixed Account Details\n3.Transaction & Bill Payment\n4.Do you Have any complain? \n\n";
    			cin>>x;
    			
    			if(x==1)
    			{
    				
    				u1.setSavingDetails(120018001,"Kirulapana", "LKR", 56500.35);
    				u1.setDebitCardDetails("4565 4895 1265 4856","03 / 25");
    				u1.setLoanDetails(2000525352,"Education Loan", 800000.00);
    				u1.setCcardDetails("4585 8956 7845 5656","04/23",25000.00);
    				u1.displayaccountDetails();
    				u1.displayDcardDetails();
    				u1.displayLoanDetails();
    				u1.displayCcardDetails();
    				
				}
				else if (x == 2)
				{
					u1.setfixedDetails(350060001,"Kirulapana","LKR", 10000000.00);
					u1.displayfixedDetails();
					
				}
    			else if ( x==3)
    			{
    				cout <<"\n\nselect Bill payment(1) Or Money Transaction (2) : ";
    				cin >> x;
    				
    				switch (x)
    				{
    					case 1:
    						{
    							cin.ignore();
    							cout<<"Select Service Provider Name: ";
    							getline(cin,td);
    							cout<< "Enter Mobile Number: ";
    							cin >> mn;
    							cout<< "Enter Amount: ";
    							cin >> amount;
    							
    							u1.setpaymentDetails(td,mn,amount);
    							u1.displaypayment();
    							break;
							}
						
						case 2:
						{
							cin.ignore();
    						cout<<"Enter Bank Name:  ";
    						getline(cin,td);
    						cin.ignore();
    						cout<<"Enter Branch Name:  ";
    						getline(cin,br);
    						cout<<"Enter  my Reference No:  ";
    						cin>>mr;
    						cout<< "Enter Account Number: ";
    						cin >> ra;
    						cout<< "Enter Amount: ";
    						cin >> amount;
    							
    						u1.setTransactionDetails(td,br,mr,ra,amount);
    						u1.displayTransaction();
    						break;
						}
					}
				}
				else if( x == 4)
				{
					cin.ignore();
					cout<< "Enter Your Name: ";
					getline(cin,br);
					cin.ignore();
					cout<< "Enter Your Email: ";
					getline(cin,pw);
				   	cout<<"Enter your contact No: ";
					cin>>mn;
					cin.ignore();
					cout<<"\nEnter your complain here: \n"<<endl;
					getline(cin,td);
					 
					 u1.setComplainDetails(br,pw,td,mn);
					 u1.displaycomplain();					
				}
		}
     a=-1;				
	}
	else if (uID == 1002 && pw == "Pahasara@123")
	{
		u2.setUserDetails(1002, "Pahasara@123");
    	u2.setDetails(1002,"R.P.N Arachchi", "pahasra@gmail.com", "Arachchi Niwasa, Allewela Rd, Hakmana. ","994035512V",120018002);
    	u2.displayUserDetails();
    	cout<<"\nDo you want another service: (Y/N): ";
    	cin>>nu;
    	switch (nu)
    	{
    		case 'Y':
    		case 'y':
    			cout<< "Select: \n1.Saving Account Details\n2.Fixed Account Details\n3.Transaction & Bill Payment\n4.Do you Have any complain? \n\n";
    			cin>>x;
    			
    			if(x==1)
    			{
    				
    				u2.setSavingDetails(120018002,"Hakmana", "LKR", 6500.35);
    				u2.setDebitCardDetails("4885 4845 1565 4886","03 / 23");
    				u2.setLoanDetails(2000525353,"Home Loan", 1500000.00);
    				
    				u2.displayaccountDetails();
    				u2.displayDcardDetails();
    				u2.displayLoanDetails();
    				cout<<"\n\nNo active Credit Cards Details in Here!!   Apply Now!!\n "<<endl;
    				
				}
				else if (x == 2)
				{
					u2.setfixedDetails(350060002,"Matara","LKR", 1000000.00);
					u2.displayfixedDetails();
					
				}
    			else if ( x==3)
    			{
    				cout <<"\n\nselect Bill payment(1) Or Money Transaction (2) : ";
    				cin >> x;
    				
    				switch (x)
    				{
    					case 1:
    						{
    							cin.ignore();
    							cout<<"Select Service Provider Name: ";
    							getline(cin,td);
    							cout<< "Enter Mobile Number: ";
    							cin >> mn;
    							cout<< "Enter Amount: ";
    							cin >> amount;
    							
    							u2.setpaymentDetails(td,mn,amount);
    							u2.displaypayment();
    							break;
							}
						
						case 2:
						{
							cin.ignore();
    						cout<<"Enter Bank Name:  ";
    						getline(cin,td);
    						cin.ignore();
    						cout<<"Enter Branch Name:  ";
    						getline(cin,br);
    						cout<<"Enter  my Reference No:  ";
    						cin>>mr;
    						cout<< "Enter Account Number: ";
    						cin >> ra;
    						cout<< "Enter Amount: ";
    						cin >> amount;
    							
    						u2.setTransactionDetails(td,br,mr,ra,amount);
    						u2.displayTransaction();
    						break;
						}
					}
				}
				else if( x == 4)
				{
					cin.ignore();
					cout<< "Enter Your Name: ";
					getline(cin,br);
					cin.ignore();
					cout<< "Enter Your Email: ";
					getline(cin,pw);
				   	cout<<"Enter your contact No: ";
					cin>>mn;
					cin.ignore();
					cout<<"\nEnter your complain here: \n"<<endl;
					getline(cin,td);
					 
					 u2.setComplainDetails(br,pw,td,mn);
					 u2.displaycomplain();					
				}
		}
     a=-1;			
	}
	else if (uID == 1003 && pw == "Dinuka@123")
	{
		u3.setUserDetails(1003,"Dinuka@123");
    	u3.setDetails(1003,"G.A.D Nawod", "dinuka@gmail.com", "No/129 New Kandy Rd, Panadura.","200054268795",120018003);
    	u3.displayUserDetails();
    	cout<<"\nDo you want another service: (Y/N): ";
    	cin>>nu;
    	switch (nu)
    	{
    		case 'Y':
    		case 'y':
    			cout<< "Select: \n1.Saving Account Details\n2.Fixed Account Details\n3.Transaction & Bill Payment\n4.Do you Have any complain? \n\n";
    			cin>>x;
    			
    			if(x==1)
    			{
    				
    				u3.setSavingDetails(120018003,"Panadura", "LKR", 156500.45);
    				u3.setDebitCardDetails("4525 4855 7265 9856","02 / 25");
    				u3.setLoanDetails(2000525352,"Personal Loan", 80000.00);
    				u3.setCcardDetails("4515 8556 7885 5656","04/25",50000.00);
    				u3.displayaccountDetails();
    				u3.displayDcardDetails();
    				u3.displayLoanDetails();
    				u3.displayCcardDetails();
    				
				}
				else if (x == 2)
				{
					cout<<"\n\nNo Fixed Deposit Account!\n\n"<<endl;
					
				}
    			else if ( x==3)
    			{
    				cout <<"\n\nselect Bill payment(1) Or Money Transaction (2) : ";
    				cin >> x;
    				
    				switch (x)
    				{
    					case 1:
    						{
    							cin.ignore();
    							cout<<"Select Service Provider Name: ";
    							getline(cin,td);
    							cout<< "Enter Mobile Number: ";
    							cin >> mn;
    							cout<< "Enter Amount: ";
    							cin >> amount;
    							
    							u3.setpaymentDetails(td,mn,amount);
    							u3.displaypayment();
    							break;
							}
						
						case 2:
						{
							cin.ignore();
    						cout<<"Enter Bank Name:  ";
    						getline(cin,td);
    						cin.ignore();
    						cout<<"Enter Branch Name:  ";
    						getline(cin,br);
    						cout<<"Enter  my Reference No:  ";
    						cin>>mr;
    						cout<< "Enter Account Number: ";
    						cin >> ra;
    						cout<< "Enter Amount: ";
    						cin >> amount;
    							
    						u3.setTransactionDetails(td,br,mr,ra,amount);
    						u3.displayTransaction();
    						break;
						}
					}
				}
				else if( x == 4)
				{
					cin.ignore();
					cout<< "Enter Your Name: ";
					getline(cin,br);
					cin.ignore();
					cout<< "Enter Your Email: ";
					getline(cin,pw);
				   	cout<<"Enter your contact No: ";
					cin>>mn;
					cin.ignore();
					cout<<"\nEnter your complain here: \n"<<endl;
					getline(cin,td);
					 
					 u3.setComplainDetails(br,pw,td,mn);
					 u3.displaycomplain();					
				}
		}
     a=-1;			
	}
	else if (uID == 1004 && pw == "Naveen@123")
	{
		u4.setUserDetails(1004,"Naveen@123");
    	u4.setDetails(1004,"W.N Dilsara", "naveen@gmail.com", "No/225 Gehan Rd, Thalangama North, Koswatta","993520411V",120018004);
    	u4.displayUserDetails();
    	cout<<"\nDo you want another service: (Y/N): ";
    	cin>>nu;
    	switch (nu)
    	{
    		case 'Y':
    		case 'y':
    			cout<< "Select: \n1.Saving Account Details\n2.Fixed Account Details\n3.Transaction & Bill Payment\n4.Do you Have any complain? \n\n";
    			cin>>x;
    			
    			if(x==1)
    			{
    				
    				u4.setSavingDetails(120018004,"Battaramulla", "LKR", 31507.85);
    				u4.setDebitCardDetails("4865 5895 1225 4896","03 / 26");
    				u4.setLoanDetails(2000525352,"Education Loan", 800000.00);
    				u4.setCcardDetails("4995 8985 7847 5546","11/25",15000.00);
    				u4.displayaccountDetails();
    				u4.displayDcardDetails();
    				u4.displayLoanDetails();
    				u4.displayCcardDetails();
    				
				}
				else if (x == 2)
				{
					u4.setfixedDetails(350060004,"Malabe","LKR", 5000000.00);
					u4.displayfixedDetails();
					
				}
    			else if ( x==3)
    			{
    				cout <<"\n\nselect Bill payment(1) Or Money Transaction (2) : ";
    				cin >> x;
    				
    				switch (x)
    				{
    					case 1:
    						{
    							cin.ignore();
    							cout<<"Select Service Provider Name: ";
    							getline(cin,td);
    							cout<< "Enter Mobile Number: ";
    							cin >> mn;
    							cout<< "Enter Amount: ";
    							cin >> amount;
    							
    							u4.setpaymentDetails(td,mn,amount);
    							u4.displaypayment();
    							break;
							}
						
						case 2:
						{
							cin.ignore();
    						cout<<"Enter Bank Name:  ";
    						getline(cin,td);
    						cin.ignore();
    						cout<<"Enter Branch Name:  ";
    						getline(cin,br);
    						cout<<"Enter  my Reference No:  ";
    						cin>>mr;
    						cout<< "Enter Account Number: ";
    						cin >> ra;
    						cout<< "Enter Amount: ";
    						cin >> amount;
    							
    						u4.setTransactionDetails(td,br,mr,ra,amount);
    						u4.displayTransaction();
    						break;
						}
					}
				}
				else if( x == 4)
				{
					cin.ignore();
					cout<< "Enter Your Name: ";
					getline(cin,br);
					cin.ignore();
					cout<< "Enter Your Email: ";
					getline(cin,pw);
				   	cout<<"Enter your contact No: ";
					cin>>mn;
					cin.ignore();
					cout<<"\nEnter your complain here: \n"<<endl;
					getline(cin,td);
					 
					 u4.setComplainDetails(br,pw,td,mn);
					 u4.displaycomplain();					
				}
		}
     a=-1;			
	}
	else if (uID == 1005 && pw == "Kithmini@123")
	{
		u5.setUserDetails(1005,"Kithmini@123");
    	u5.setDetails(1005,"K.S.K Wijesinghe", "kithmini@gmail.com", "Kithmini niwasa,  bandaththara Rd, Matara.","9938960411V",120018005);
    	u5.displayUserDetails();
    	cout<<"\nDo you want another service: (Y/N): ";
    	cin>>nu;
    	switch (nu)
    	{
    		case 'Y':
    		case 'y':
    			cout<< "Select: \n1.Saving Account Details\n2.Fixed Account Details\n3.Transaction & Bill Payment\n4.Do you Have any complain? \n\n";
    			cin>>x;
    			
    			if(x==1)
    			{
    				
    				u5.setSavingDetails(120018005,"Matara", "LKR", 5100.35);
    				u5.setDebitCardDetails("4885 4895 5265 4876","03 / 25");
    				u5.setLoanDetails(2000525352,"Education Loan", 800000.00);
    				u5.setCcardDetails("4585 8956 7856 5856","04/23",35000.00);
    				u5.displayaccountDetails();
    				u5.displayDcardDetails();
    				u5.displayLoanDetails();
    				u5.displayCcardDetails();
    				
    				
				}
				else if (x == 2)
				{
					cout<<"\n\nNo Fixed Deposit Account!\n\n"<<endl;
						
				}
    			else if ( x==3)
    			{
    				cout <<"\n\nselect Bill payment(1) Or Money Transaction (2) : ";
    				cin >> x;
    				
    				switch (x)
    				{
    					case 1:
    						{
    							cin.ignore();
    							cout<<"Select Service Provider Name: ";
    							getline(cin,td);
    							cout<< "Enter Mobile Number: ";
    							cin >> mn;
    							cout<< "Enter Amount: ";
    							cin >> amount;
    							
    							u5.setpaymentDetails(td,mn,amount);
    							u5.displaypayment();
    							break;
							}
						
						case 2:
						{
							cin.ignore();
    						cout<<"Enter Bank Name:  ";
    						getline(cin,td);
    						cin.ignore();
    						cout<<"Enter Branch Name:  ";
    						getline(cin,br);
    						cout<<"Enter  my Reference No:  ";
    						cin>>mr;
    						cout<< "Enter Account Number: ";
    						cin >> ra;
    						cout<< "Enter Amount: ";
    						cin >> amount;
    							
    						u5.setTransactionDetails(td,br,mr,ra,amount);
    						u5.displayTransaction();
    						break;
						}
							
					}
				}
				else if( x == 4)
				{
					cin.ignore();
					cout<< "Enter Your Name: ";
					getline(cin,br);
					cin.ignore();
					cout<< "Enter Your Email: ";
					getline(cin,pw);
				   	cout<<"Enter your contact No: ";
					cin>>mn;
					cin.ignore();
					cout<<"\nEnter your complain here: \n"<<endl;
					getline(cin,td);
					 
					 u5.setComplainDetails(br,pw,td,mn);
					 u5.displaycomplain();	
					 				
				}
		}
	a=-1;			
    
	}
	
	else
	{
		cout << endl<< "You entered an incorrect user ID or password." << endl<<endl;
		cout << "New to Online Banking? Create an Account (Y/N): ";
		cin >> nu;
		
		switch (nu)
		{
			case 'Y':
			case 'y':
				{
					long account;
					string name;
					string email;
					string password;
					string address;
					string nic;
			
					cout<<endl<<endl;
			
					cout<< "Enter Your Account No : ";
					cin>> account;	
					cin.ignore();
					cout<<"Enter Your Name: ";
					getline(cin, name);
					cout<< "Enter Your NIC No: ";
					cin>> nic;
					cin.ignore();
					cout<< "Enter Your Address: ";
					getline(cin, address);
					cout<< "Enter Your Email: ";
					cin>> email;
					cin.ignore();
					cout<< "Enter Your Password: ";
					getline(cin, password);
			
					Unregistered_user newUser;
			
					newUser.setnewuserdetails(1006,name,email,address,nic,password,account);
					newUser.displaynewuserdetails();
					a=-1;
					break;
				}
	
			case 'N':
			case 'n':
				{
					cout<<"\n\n"<<endl;
					 break;
				}
			default:
				cout<<endl<<"Invalid Input";
				break;

		}
	 		
	}
}
	cout<< "\n\n Vacancies Available in Here !!\n\tsee more(enter 1): ";
	cin>>x;
	if(x==1)
	{
		Vacancy v1,v2,v3;
		
		v1.setVacancyDetails("Bank Trainee","\n\n5 > C Passes or Credit Passes in O/L exam.including C pass (Minimum) in English Language \nAge limi: 18-24 years\n", 10001);
		v2.setVacancyDetails("Office Guard","\n\n5 > C Passes or Credit Passes in O/L exam. \nAge limi: 45-65 years\n", 10002);
		v3.setVacancyDetails("Area Manager","\n\nCompleted CIMA (Up to Operational-Level)\nCompleted CIM (UK)  (up to Diploma-Level)\nCompleted IABF  (at IBSL -Institute of #Bankers of Sri-Lanka)\nAAT- Passed Finalist.\nAge limi: below 24\n", 10003);

		v1.displayvacancyDetails();
		v2.displayvacancyDetails();
		v3.displayvacancyDetails();	
	}	
		return 0;
}