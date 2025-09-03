/*
Problem#33
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Entre the Character : ";
	getline(cin, s);

	int count = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u') {
			count++;
		}
	}
	cout << "Number of Vowel is : " << count << endl;
}
