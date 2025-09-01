/*
Problem#12
  */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> arr(10, 0);
	arr[0] = 1;

	cout << " 1 ";
	for (int i = 1; i < 10; i++) {
		if (i == 1) {
			arr[1] = arr[0];
		}
		else {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		
		cout << arr[i] << " ";
	}

	
}
