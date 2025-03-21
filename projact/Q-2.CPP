#include <iostream>
using namespace std;

int main() {
    int number; 
    int count = 0;
    cout << "Enter the number: ";
    cin >> number;

    
    if (number < 0) {
        number = number;
    }

    do {
        count++;
        number /= 10;
    } while (number != 0);

    cout << "  number of digits: " << count << endl;
}