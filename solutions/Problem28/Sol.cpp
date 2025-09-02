/*
Problem#28
  */

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Entre the Character : ";
	string s;
	getline(cin, s);

	cout << "Chart after Inverting case : ";

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == ' ') {
			cout << s[i];
			continue;
		}
		
		if (s[i] >= 'A' && s[i] <= 'Z') {

			cout << (char)tolower(s[i])  ;
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			cout << (char)toupper(s[i])  ;
		}
	}
	

}
