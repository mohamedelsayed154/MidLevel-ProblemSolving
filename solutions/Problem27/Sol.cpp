/*
Problem#27
  */

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Entre the Character : ";
	char s;
	cin >> s;

	cout << "Chart after Inverting case : ";
	if (s >= 'A' && s <= 'Z') {
		
		cout << (char)tolower(s) << endl;
	}
	else if ( s >= 'a' && s <= 'z' ) {
		cout << (char)toupper(s) << endl;
	}

}
