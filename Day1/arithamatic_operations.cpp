#include <iostream>
using namespace std;

class Solution {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            cout << "Division by zero is undefined." << endl;
            return -1; // Return some error value to indicate division by zero
        }
        return a / b;
    }
};

int main() {
    Solution sol;

    // Example usage
    int a = 10, b = 5;

    cout << "Addition: " << sol.add(a, b) << endl;          // Output: 15
    cout << "Subtraction: " << sol.subtract(a, b) << endl;  // Output: 5
    cout << "Multiplication: " << sol.multiply(a, b) << endl; // Output: 50
    cout << "Division: " << sol.divide(a, b) << endl;        // Output: 2

    // Test division by zero
    cout << "Division by zero: " << sol.divide(a, 0) << endl; // Output: Error message

    return 0;
}
