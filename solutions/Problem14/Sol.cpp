/*
Problem #14
  */

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
  
    cout << "Enter the 3x3 matrix elements :" << endl;  // cin the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    bool is_scaler = true; 
    int scaler_value = arr[0][0]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i == j) {
                if (arr[i][j] != scaler_value) {
                    is_scaler = false;
                    break; 
                }
            }
            
            else {
                if (arr[i][j] != 0) {
                    is_scaler = false;
                    break; 
                }
            }
        }
        if (!is_scaler) {
            break; 
        }
    }

    if (is_scaler) {
        cout << "Yes: Matrix is Scaler" << endl;
    }
    else {
        cout << "No: Matrix isn't Scaler" << endl;
    }

    
}
