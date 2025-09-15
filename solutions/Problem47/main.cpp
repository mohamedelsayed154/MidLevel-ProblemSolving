/*
Problem#47
  */

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Entre the year : ";
	cin >> x;

	if (x % 400 == 0) {
		cout << x << " is Leap Years\n";
		
	}
	else if (x % 4 == 0 && x % 100 != 0) {
		cout << x << " is Leap Years\n";
	}
	else {
		cout << x << " is not Leap Years\n";
	}
}
