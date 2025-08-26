/*
Problem #10
  */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));

	int arr[3][3];

	cout << "Matrix : " << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand() % 11;
			cout << "  " << arr[i][j] << "  ";
		}
		cout << endl;
	}

	int sum = 0;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			sum += arr[x][y];
		}
	}

	cout << "Sum of Matrix is : " << sum << endl;
}
