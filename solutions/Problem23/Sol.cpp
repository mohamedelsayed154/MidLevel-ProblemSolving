/*
Problem#23
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	cout << s[0] << endl;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << s[i + 1] << endl;
		}
	}
		
}
