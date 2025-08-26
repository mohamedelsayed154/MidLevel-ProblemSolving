/*
Problem #11
  */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));

	int arr1[3][3];

	cout << "Matrix 1 : " << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr1[i][j] = rand() % 11;
			cout << "  " << arr1[i][j] << "  ";
		}
		cout << endl;
	}

	int sum1 = 0;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			sum1 += arr1[x][y];
		}
	}


	int arr2[3][3];

	cout << "Matrix 2 : " << endl << endl;

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			arr2[a][b] = rand() % 11;
			cout << "  " << arr1[a][b] << "  ";
		}
		cout << endl;
	}

	int sum2 = 0;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			sum2 += arr2[x][y];
		}
	}
	cout << endl << endl;
	if (sum1 == sum2) {
		cout << "Yes : Matrix are equal\n";
	}
	else {
		cout << "No : Matrix aren't equal\n";
	}
}
