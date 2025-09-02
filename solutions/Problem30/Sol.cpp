/*
Problem#30
  */

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Entre the Character : ";
	string s;
	getline(cin, s);

	cout << endl << endl;

	cout << "Entre the Character : ";
	char Letter;
	cin >> Letter;

	int count = 0; 

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == Letter) {
			count++;
		}
	}

	cout << "Letter '" << Letter << "' Count : " << count << endl;
	
	
	

}
