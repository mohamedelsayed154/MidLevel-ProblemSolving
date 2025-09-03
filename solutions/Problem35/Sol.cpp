/*
Problem#35
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Entre the String : ";
	getline(cin, s);

	cout << "Your String Words are : " << endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << endl;
		}
		else {
			cout << s[i];
		}
	}
	
}
