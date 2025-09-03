/*
Problem#34
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Entre the String : ";
	getline(cin, s);

	cout << "Vowels in String are : ";

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U') {
			cout << s[i] << "  ";
		}
	}
	
}
