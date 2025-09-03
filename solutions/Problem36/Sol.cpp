/*
Problem#36
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Entre the String : ";
	getline(cin, s);

	int count = 1;

	cout << "The Number of Words in Your String is :  ";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			count++;
		}
		
	}
	cout << count << endl;
}
