#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the array: ";
    cin >> rows;
    cout << "Enter the array: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    cout << "Largest nub in the 2D array is: " << max << endl;

    return 0;
}