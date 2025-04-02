int calculate(int a, int b, int choice) {
    switch (choice) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return (b != 0) ? a / b : 0;
        case 5: return (int)a % (int)b;
        default: return 0;
    }
}