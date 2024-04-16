#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void complement() {
	cout << "********MENU********\n";
	cout << "1. Binary to 1's C\n";
	cout << "2. Decimal to 1's C\n";
	cout << "3. Exit Program\n";
	cout << "********************\n";	
}

int main() {
	vector<int> rem;
	bool run = 1, stop = 0;
	int option, decimal, remainder;
	string num;
	
	do {
		complement();
		
		cout << "Enter Option: ";
		cin >> option;
		system("pause>0");
		system("cls");
		
		if(option == 1) {
			cout << "Enter number(Binary): ";
			cin >> num;
			
			string val[num.size()];
			
			cout << "\n1's Complement: ";
			
			for(int i = 0; i < num.size(); i++) {
				if(num[i] == '0') {
					val[i] = '1';
				}
				if(num[i] == '1') {
					val[i] = '0';
				}
				if(num[i] != '1' && num[i] != '0') {
					cout << "Invalid Entry";
					break;
				}
				
				cout << val[i];
			}
			
			cout << endl << "Press Enter...";
			system("pause>0");
			system("cls");
		}
		
		if(option == 2) {
			cout << "Enter number(Decimal): ";
			cin >> decimal;

			while(stop != 1) {
				remainder = decimal % 2;
				rem.push_back(remainder);
				decimal /= 2;
				if(decimal == 0) {
					rem.push_back(decimal);
					stop = 1;
				}
			}
			rem.pop_back();
			reverse(rem.begin(), rem.end());
			
			cout << "Binary: ";
			for(int i = 0; i < rem.size(); i++) {
				cout << rem[i];
			}
			
			string val[rem.size()];
			
			cout << "\n1's Complement: ";
			
			for(int i = 0; i < rem.size(); i++) {
				if(rem[i] == 0) {
					val[i] = '1';
				}
				if(rem[i] == 1) {
					val[i] = '0';
				}
				
				cout << val[i];
			}
			
			cout << endl << "Press Enter...";
			system("pause>0");
			system("cls");
			rem.clear();
		}
		
		if(option == 3) {
			run = 0;
		}
		
	} while(run != 0);
	
	return 0;
}
