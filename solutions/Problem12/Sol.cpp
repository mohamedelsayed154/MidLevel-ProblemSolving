/*
Problem #12
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



	int arr2[3][3];

	cout << "Matrix 2 : " << endl << endl;

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			arr2[a][b] = rand() % 11;
			cout << "  " << arr1[a][b] << "  ";
		}
		cout << endl;
	}

	for (int z = 0; z < 3; z++) {
		for (int x = 0; x < 3; x++) {
			if (arr1[z][x] != arr2[z][x]) {
				cout << "No : Matrix aren't equal\n";
				return 0;
			}
		}
	}
	cout << "Yes : Matrix are equal\n";

}
