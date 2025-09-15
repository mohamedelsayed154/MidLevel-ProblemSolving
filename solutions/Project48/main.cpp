/*
Project#48
  */

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Entre the year : ";
	cin >> x;
	// ----------------Leap or not-----------
	int days = 0;
	if (x % 400 == 0 || x % 4 == 0 && x % 100 != 0) {
		days = 366;
		
	}
	else {
		days = 365;
	}
	cout << "Number of Days in Years [" << x << "] is : " << days << endl;

	// ------------Hours in Year----------------
	int hours = 24 * days;
	cout << "Number of Hours in Years [" << x << "] is : " << hours << endl;
	
	//----------------Minuts in Year----------------

	int minuts = 60 * hours;
	cout << "Number of Minuts in Year [" << x << "] is : " << minuts << endl;

	//-----------Seconds in Year------------

	int sec = minuts * 60;
	cout << "Number of Seconds in Year [" << x << "] is : " << sec << endl;
}
