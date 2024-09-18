#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//int main() {
//	string name;
//	
//	cout << "Enter your name: " << endl;
//	getline(cin, name);
//	
//	ofstream myfile("abc.txt");
//	myfile << name;
//	
//	myfile.close();
//	cout << "File Operation performed succesfully" << endl;
//	return 0;
//}

int main() {
	//Declare and open a text file
	ifstream openFile("data.txt"); 
	string line;
	
	while(!openFile.eof()) {
	//fetch line from data.txt and put it in a string
	getline(openFile, line);
	cout << line;
	}
	
	openFile.close(); // close the file
	return 0; 
}
