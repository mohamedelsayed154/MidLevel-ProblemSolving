/*
Problem #08
  */

#include <iostream>
#include <cstdlib>
using namespace std;


void Matrix_1(int arr[3][3]);
void Matrix_2(int arr[3][3]);
void Result(int arr1[3][3], int arr2[3][3]);

int main() {

	srand(time(0));
	int arr1[3][3], arr2[3][3];
	Matrix_1(arr1);
	cout << endl << endl;
	Matrix_2(arr2);
	cout << endl << endl;

	Result( arr1,  arr2);


}

void Matrix_1(int arr[3][3]) {
	cout << "Matrix 1 : " << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand() % 101;
			cout << "\t" << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Matrix_2(int arr[3][3]) {
	cout << "Matrix 2 : " << endl << endl;

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			arr[x][y] = rand() % 101;
			cout << "\t" << arr[x][y] << "\t";
		}
		cout << endl;
	}
}

void Result(int arr1[3][3], int arr2[3][3]) {
	cout << "Result : " << endl << endl;
	for (int q = 0;  q < 3; q++) {
		for (int w = 0; w < 3; w++) {
			cout << "\t" << arr1[q][w] * arr2[q][w] << "\t";
		}
		cout << endl;
	}
}
