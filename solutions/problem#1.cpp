/*
  
  Problem #01

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
}
