/*
Probem#18
  */

#include <iostream>
using namespace std;

int main() {
    int arr[3][3] , arr2[3][3];

    // cin the matrix
    cout << "Enter the 3x3 matrix 1 elements :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << endl;

    cout << "Enter the 3x3 matrix 2 elements :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "Matrix : " << endl << endl;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << "  " << arr[a][b] << "  ";
        }
        cout << endl;
    }

    cout << "Matrix : " << endl << endl;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << "  " << arr2[a][b] << "  ";
        }
        cout << endl;
    }

    // Intersected numbers

    cout << "Intersected Numbers are : " << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int a = 0; a < 3; a++) {
                for (int b = 0; b < 3; b++) {
                    if (arr[x][y] == arr2[a][b]) {
                        cout << arr[x][y] << "  ";
                    }
                }
            }
        }
    }
    
}

/*
This code has a repetition problem and contains 4 loops, which is not the best code

  */
