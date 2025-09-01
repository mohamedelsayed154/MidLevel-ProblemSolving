/*
Problem#20
  */

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    // cin the matrix
    cout << "Enter the 3x3 matrix  elements :" << endl;
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

    for (int x = 0; x < 3; x++) {
        if (arr[x][0] != arr[x][2]) {
            cout << "Matrix is NOT Palindrom\n";
            return 0;
        }
    }
    cout << "Matrix is  Palindrom\n";
    
}
