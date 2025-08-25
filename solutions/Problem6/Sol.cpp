/*
Problem #06
  */

#include <iostream>
using namespace std;

int main() {
	cout << "The Following is a 3x3 Ordered Matrix : " << endl << endl;
	int row = 1;
	for (int i = 1; i < 10; i++) {
		cout << "   " <<  i << "   ";
		row++;
		if (row > 3) {
			cout << endl;
			row = 1;                   
		}
	}

}
