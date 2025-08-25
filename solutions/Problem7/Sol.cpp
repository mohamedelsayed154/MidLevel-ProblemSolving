/*
Problem *07
  */

#include <iostream>
using namespace std;


void FillMatrix(int arr[3][3]);
void transposed(int arr[3][3]);

int main() {
	int arr[3][3] = { 0 };
	FillMatrix(arr);
	transposed(arr);
}

void FillMatrix(int arr[3][3]) {

	cout << "The Following is a 3x3 Orderd Matrix : " << endl;
	int count = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 4; j++) {
			arr[i][j - 1] = count;
			count++;
			cout << "\t" << arr[i][j - 1] << "\t";
		}
		cout << endl;
	}

}

void transposed(int arr[3][3]) {
	cout << "The Following is the Transposed Matrix : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << arr[j][i] << "\t";
		}
		cout << endl;
	}
}
