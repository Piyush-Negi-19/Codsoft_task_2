#include <iostream>
using namespace std;

// Class for Arithmetic Operations
class Arithmetic {
public:
    // Member function for addition
    double add(double a, double b) {
        return a + b;
    }

    // Member function for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Member function for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Member function for division
    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }

    // Function to display menu and get user's choice
    char displayMenu() {
        char choice;
        cout << "\nBasic Calculator\n";
        cout << "-----------------\n";
        cout << "Choose an operation:\n";
        cout << "Press (1) for Addition (+)\n";
        cout << "Press (2) for Subtraction (-)\n";
        cout << "Press (3) for Multiplication (*)\n";
        cout << "Press (4) for Division (/)\n";
        cout << "Press (5) for Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }
};

int main() {
    Arithmetic calc;
    double num1, num2, result;
    char operation;

    while (true) {
        operation = calc.displayMenu();

        if (operation == '5') {
            cout << "Exiting the program." << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '1':
                result = calc.add(num1, num2);
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '2':
                result = calc.subtract(num1, num2);
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '3':
                result = calc.multiply(num1, num2);
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '4':
                result = calc.divide(num1, num2);
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation selected." << endl;
                break;
        }
    }
    return 0;
}