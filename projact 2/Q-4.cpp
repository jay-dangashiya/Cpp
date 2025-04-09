#include <iostream>
using namespace std;
int main() {
    int row, col;

    cout << "Enter the arr row size: ";
    cin >> row;
    cout << "Enter the arr col size: ";
    cin >> col;
 
    int arr[100][100];  

    cout << "Enter array element:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    int row;
    cout << "Enter row num to sum: ";
    cin >> row;

    int row = 0;
    cout << "Row " << row << " ele: ";
    for (int j = 0; j < col; j++) {
        cout << arr[row][j] << " ";
        row += arr[row][j];
    }
    cout << "\nSum of row " << row << " = " << row << endl;

    int col;
    cout << "Enter col num to sum: ";
    cin >> col;

    int col = 0;
    cout << "Col " << col << " el: ";
    for (int i = 0; i < row; i++) {
        cout << arr[i][col] << " ";
        col += arr[i][col];
    }
    cout << "\nSum of col " << col << " = " << col << endl;
    return 0;
}
