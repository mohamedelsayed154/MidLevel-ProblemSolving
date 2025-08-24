/*
Problem #05
  */

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	srand(time(0));

	int num[3][3];
	vector <int> arrSum(3, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			num[i][j] = rand() % 101;

			cout << num[i][j] << "    ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int x = 0; x < 3; x++) {
		int sum = 0;
		for (int y = 0; y < 3; y++) {

			sum += num[y][x];
		}
		arrSum[x] = sum;
	}

	for (int w = 0; w < 3; w++) {
		cout << "Col " << w + 1 << " Sum = " << arrSum[w] << endl;
	}
}
