#include <iostream>
using namespace std;
int main() {
    int number; 
    int  firstdigit; 
    int  lastdigit;

    cout << "Enter the number: ";
    cin >> number;

  
    lastdigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstdigit = number;

    int sum = firstdigit + lastdigit;
    cout << "The sum of the first and last digits: " << sum << endl;

}