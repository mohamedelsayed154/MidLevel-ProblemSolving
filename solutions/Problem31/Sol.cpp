/*
Problem#31
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
	int countCapital = 0; 

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == Letter) {
			count++;
		}
		else if (s[i] == (char) Letter - 32) {
			countCapital++;
		}
	}

	cout << "Letter '" << Letter << "' Count : " << count << endl;
	cout << "Letter '" << Letter << "' or '" << char (Letter - 32) << "' Count : " << count + countCapital << endl;
	
	

}


