#include <iostream>
#include <set> 

using namespace std;

int main() {
    int arr[3][3], arr2[3][3];

    // cin the matrix 1
    cout << "Enter the 3x3 matrix 1 elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // cin the matrix 2
    cout << "\nEnter the 3x3 matrix 2 elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    
    set<int> unique_elements_arr1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            unique_elements_arr1.insert(arr[i][j]);
        }
    }

   
    set<int> intersected_numbers;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           
            if (unique_elements_arr1.count(arr2[i][j])) {
                intersected_numbers.insert(arr2[i][j]);
            }
        }
    }

   
    cout << "\nIntersected Numbers are:" << endl;
    for (int num : intersected_numbers) {
        cout << num << " ";
    }
    cout << endl;

}
