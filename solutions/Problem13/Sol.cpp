/*
Problem #13
  */

#include <iostream>

using namespace std;

int main() {
	

	int arr[3][3];

	// cin the matrix

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (x == y && arr[x][y] != 1) {
				cout << "No : Matrix isn't identity\n";
				return 0;
			}
			else if (x != y && arr[x][y] != 0) {
				cout << "No : Matrix isn't identity\n";
				return 0;
			}
		}
	}
	cout << "Yes : Matrix is identity\n";
}
