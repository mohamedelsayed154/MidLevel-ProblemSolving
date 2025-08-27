/*
Problem #16
  */

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    // cin the matrix
    cout << "Enter the 3x3 matrix elements :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix : " << endl << endl;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << "  " << arr[a][b] << "  ";
        }
        cout << endl;
    }
    
    int count_zero = 0;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (arr[x][y] == 0) {
                count_zero++;
            }
        }
    }
    cout << endl;

    if (count_zero > 4) {
        cout << "Yes : it's Sparse\n";
    }
    else {
        cout << "No : it isn't Sparse\n";
    }
}
