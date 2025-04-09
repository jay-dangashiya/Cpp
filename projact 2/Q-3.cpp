#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the arr and row & col size: ";
    cin >> size;

    int arr[size][size], tra[size][size];

  
    cout << "Enter arr:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tra[j][i] = arr[i][j];
        }
    }

    cout << "The tra  of an arr:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << tra[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}