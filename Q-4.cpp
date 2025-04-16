#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

   
    const string green = "\033[1;32m"; 
    const string red = "\033[1;31m";   
    const string reset = "\033[0m";   

    cout << "1. Who wrote the Declaration of Independence?\n";
    cout << "A. George Washington\n";
    cout << "B. Thomas Jefferson\n";
    cout << "C. John Adams\n";
    cout << "D. Benjamin Franklin\n";
    cout << "Your answer: ";
    cin >> answer;

    if (toupper(answer) == 'B') {
        cout << green << "Correct!" << reset << "\n\n";
        score++;
    } else {
        cout << red << "Wrong. The correct answer is B. Thomas Jefferson." << reset << "\n\n";
    }

    cout << "2. What year did World War I begin?\n";
    cout << "A. 1912\n";
    cout << "B. 1914\n";
    cout << "C. 1916\n";
    cout << "D. 1918\n";
    cout << "Your answer: ";
    cin >> answer;

    if (toupper(answer) == 'B') {
        cout << green << "Correct!" << reset << "\n\n";
        score++;
    } else {
        cout << red << "Wrong. The correct answer is B. 1914." << reset << "\n\n";
    }

    cout << "3. Which empire built the Colosseum?\n";
    cout << "A. Greek\n";
    cout << "B. Egyptian\n";
    cout << "C. Roman\n";
    cout << "D. Persian\n";
    cout << "Your answer: ";
    cin >> answer;

    if (toupper(answer) == 'C') {
        cout << green << "Correct!" << reset << "\n\n";
        score++;
    } else {
        cout << red << "Wrong. The correct answer is C. Roman." << reset << "\n\n";
    }

    cout << "You got " << score << " out of 3 questions right!" << endl;

    return 0;
}