#include <iostream>
#include <climits>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return x / y;
}

int main() {
    char operation;
    double num1, num2;

    cout << "Select operation:" << endl;
    cout << "1. Add (+)" << endl;
    cout << "2. Subtract (-)" << endl;
    cout << "3. Multiply (*)" << endl;
    cout << "4. Divide (/)" << endl;

    while (true) {
        cout << "Enter choice (+, -, *, /): ";
        cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            cout << "Enter first number: ";
            while (!(cin >> num1)) {
                cin.clear(); // clear input buffer to restore cin to a usable state
                cin.ignore(INT_MAX, '\n'); // ignore last input
                cout << "You can only enter numbers. Please enter first number again: ";
            }

            cout << "Enter second number: ";
            while (!(cin >> num2)) {
                cin.clear(); // clear input buffer to restore cin to a usable state
                cin.ignore(INT_MAX, '\n'); // ignore last input
                cout << "You can only enter numbers. Please enter second number again: ";
            }

            switch (operation) {
                case '+':
                    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                    break;
                case '-':
                    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                    break;
                case '*':
                    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                    break;
                case '/':
                    if (num2 == 0) {
                        cout << "Error! Division by zero." << endl;
                    } else {
                        cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                    }
                    break;
            }

            char nextCalculation;
            cout << "Do you want to perform another calculation? (y/n): ";
            cin >> nextCalculation;
            if (nextCalculation != 'y' && nextCalculation != 'Y') {
                break;
            }
        } else {
            cout << "Invalid operation. Please try again." << endl;
        }
    }

    return 0;
}
