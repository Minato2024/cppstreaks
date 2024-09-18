#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

void menu() {
	cout << "********MENU********\n";
	cout << "1. Check Balance\n";
	cout << "2. Deposit Money\n";
	cout << "3. Withdraw Money\n";
	cout << "4. Exit Menu\n";
	cout << "********************\n";
}

void checkbalance(int balance) {
	cout << "Your current balance is $" << balance << endl;
}

void deposit(int amount, int balance) {
	if(amount > 0) {
		balance += amount;
		cout << "Deposit Successful.\nYour current balance is $" << balance << endl;
	}
	else {
		cout << "Invalid Amount\n";
	}
}

void withdraw(int amount, int balance) {
	if((amount > 0) && (amount <= balance)) {
		balance -= amount;
		cout << "Withrawal Successful.\nYour current balance is $" << balance << endl;
	}
	else if(amount < 0) {
		cout << "Invalid Amount\n";
	}
	else {
		cout << "Insufficient Funds (Phil. 4:19)\n";
	}
}

int main() {
	int option, choice, amount, balance = 10000;
	string decision = "c";
	
	while(decision != "q") {
		menu();
		
		cout << "Enter your choice: ";
		cin >> option;
		
		switch(option) {
			case 1:
				checkbalance(balance);
				
				break;
			case 2:
				cout << "Enter Deposit Amount: ";
				cin >> amount;
				
				deposit(amount, balance);
				
				break;
			case 3:
				cout << "Enter Withdraw Amount: ";
				cin >> amount;
				
				withdraw(amount, balance);
				break;
			case 4:
				break;
			default:
				cout << "Invalid Input" << endl;
				break;
		}
		cout << "Enter c to continue or q to quit: ";
		cin >> decision;
		transform(decision.begin(), decision.end(), decision.begin(), ::tolower);
	};
	
	cout << "Thanks for running this simulation" << endl;
	
	return 0;
}