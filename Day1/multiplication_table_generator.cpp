#include <iostream>
using namespace std;

void solution(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> n;

    // Call the solution function to print the multiplication table
    solution(n);

    return 0;
}
