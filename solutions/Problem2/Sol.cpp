/*
Problem #02
  */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));

	int num[3][3];	

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
			
			sum += num[x][y];
		}
		cout << "Row "<< x + 1 << " Sum = " << sum << endl;
	}
}
