# include <iostream>
using namespace std;

class BankAccount{
	private:
		string accountNumber;
		string accountHolder;
		double balance;
		
	public:
		BankAccount(string accNum, string holder, double bal) {
			accountNumber = accNum;
			accountHolder = holder;
			balance = bal;
		}
		
	void showAccountDetails(){
		cout << "Account Number:" << accountNumber  << endl;
		cout << "Account Holder:" << accountHolder << endl;
		cout << "Balance: Rs." << balance << endl;
	}
};
	
int main(){
	BankAccount acc1("pk07786787", "FASIH", 1500000);
	cout << "Bank Account Details:" << endl;
	acc1.showAccountDetails();
	
	return 0;
}
