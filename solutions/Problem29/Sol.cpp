/*
Problem#29
  */

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Entre the Character : ";
	string s;
	getline(cin, s);

	cout << endl << endl;

	cout << "String Length : " << s.size() << endl;

	int countC = 0, countS = 0;
	for (int i = 0; i < s.size(); i++) {

		
		
		if (s[i] >= 'A' && s[i] <= 'Z') {

			countC++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			countS++;
		}
	}
	
	cout << "Capital Letters Count : " << countC << endl;
	cout << "Small Letters Count : " << countS << endl;

}
