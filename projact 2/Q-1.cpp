#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the array: ";
    cin >> a;

    int arr[a];
    cout << "Enter array" << endl;
    for (int i = 0; i < a; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Negative number : ";
    for (int i = 0; i < a; i++) {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }

    return 0;
}