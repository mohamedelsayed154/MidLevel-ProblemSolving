/*
Problem#26
  */

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Entre your String : ";
	string s;
	getline(cin, s);

	cout << endl << endl;

	cout << "String After Lower : ";

	cout <<(char) tolower (s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << " " << (char) tolower(s[i + 1]);
			i++;
		}
		else {
			cout << s[i];
		}
	}
	cout << endl << endl;


	cout << "String After Upper : ";

	cout << (char)towupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << " " << (char)toupper(s[i + 1]);
			i++;
		}
		else {
			cout << s[i];
		}
	}
	cout << endl << endl;

}
