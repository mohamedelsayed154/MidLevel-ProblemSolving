#include <iostream>
#include <string>
#include <vector>
using namespace std;

void StringAfterJoin(vector <string>& s , int count);

int main() {
	
	int count;
	cout << "Entre Number of Strings :";
	cin >> count;
	
	vector <string> s(count);

	for (int i = 0; i < count; i++) {
		cout << "Entre String : ";
		cin >> s[i];
	}
	cout << endl;
	StringAfterJoin(s , count);
}

void StringAfterJoin(vector <string>& s , int count) {
	cout << "String After Join : ";
	for (string it : s) {
		cout << it << " ";
	}
	cout << endl;
}
