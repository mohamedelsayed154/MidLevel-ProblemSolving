/*
Project#49
  */

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Entre the year : ";
	cin >> x;
	// ----------------Leap or not-----------

	int month;
	cout << "Entre the Month to Check : ";
	cin >> month;
	
	
	if (month < 1 || month > 12) {
		cout << "Wrong!\n";
		return 0;
	}

	int days = 0;
	if (x % 400 == 0 || x % 4 == 0 && x % 100 != 0) {
		days = 366;
		
	}
	else {
		days = 365;
	}

	int y = 0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		y = 31;
	}
	else if (month == 2) {
		if (days == 366) {
			y = 29;
		}
		else {
			y = 28;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		y = 30;
	}
	cout << "Number of Days in Month [" << month << "] is : " << y << endl;

	// ------------Hours in Year----------------
	int hours = 24 * y;
	cout << "Number of Hours in Month [" << month << "] is : " << hours << endl;
	
	//----------------Minuts in Year----------------

	int minuts = 60 * hours;
	cout << "Number of Minuts in Month [" << month << "] is : " << minuts << endl;

	//-----------Seconds in Year------------

	int sec = minuts * 60;
	cout << "Number of Seconds in Year [" << x << "] is : " << sec << endl;
}
