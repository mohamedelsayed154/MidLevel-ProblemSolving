/*
Problem #09
  */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));

	int arr[3][3];

	cout << "Matrix 1 : " << endl << endl;
	for (int i = 0; i < 3; i++) {   // Fill Matrix
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand() % 11;
			cout << "  " << arr[i][j] << "  ";

		}
		cout << endl;
	}


	cout << "Middle Row of Matrix is : " << endl << endl;
	for (int a = 0; a < 3; a++) { // Middle Row
		cout << "  " << arr[1][a] << "  ";
	}
	cout << endl << endl;


	cout << "Middle Col of Matrix is : " << endl << endl;
	for (int x = 0; x < 3; x++) { // Middle Col
		cout << "  " << arr[x][1] << "  ";
	}
	
}
