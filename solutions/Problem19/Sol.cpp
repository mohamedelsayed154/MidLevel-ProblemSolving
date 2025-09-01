/* 
Problem#19
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

    int min = arr[0][0], max = arr[0][0];

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (min > arr[x][y]) {
                min = arr[x][y];
            }

            if (max < arr[x][y]) {
                max = arr[x][y];
            }
        }
    }

    cout << "Max Number is : " << max << endl;
    cout << "Min Number is : " << min << endl;
    
}
