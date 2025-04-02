#include <iostream>
using namespace std;


int calculate(double a, double b, int choice) {
    switch (choice) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return (b != 0) ? a / b : 0;
        case 5: return (int)a % (int)b;
        default: return 0;
    }
}

int main() {
    int choice;
    double num1, num2, result;
    
    do {
      
        cout << "\nMenu:\n";
        cout << "1. Add (+)\n";
        cout << "2. Sub (-)\n";
        cout << "3. Multi (*)\n";
        cout << "4. Div (/)\n";
        cout << "5. Modu (%)\n";
        cout << "0. Exit\n";
        cout << "select the manu for outpute : ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 5) {
            
            cout << "Enter a: ";
            cin >> num1;
            cout << "Enter b: ";
            cin >> num2;
            
          
            result = calculate(num1, num2, choice);
            
          
            cout << "Result: " << result << "\n";
        } else if (choice != 0) {
            cout << "your choice is inpute .\n";
        }
        
    } while (choice != 0);
    
    cout << "you exit Calculator .\n";
    return 0;
}
