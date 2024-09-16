#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // Method to add an element to the vector
    void add_to_vector(vector<int> &A, int x) {
        A.push_back(x);
    }

    // Method to delete an element from the vector
    void deleteElement(vector<int>& A, int element) {
        auto it = find(A.begin(), A.end(), element); 
        if (it != A.end()) {
            A.erase(it); 
            cout << "Deleted " << element << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    // Method to reverse the vector
    void reverse_vector(vector<int> &A) {
        reverse(A.begin(), A.end());
    }

    // Method to print the size of the vector
    void size_of_vector(vector<int> &A) {
        cout << A.size() << endl;
    }

    // Method to print all elements of the vector
    void print_vector(vector<int> &A) {
        for (auto ele : A) {
            cout << ele << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;  // Create an instance of the Solution class
    vector<int> A;  // Create an empty vector

    // Input example
    vector<pair<char, int>> commands = {
        {'a', 10},
        {'a', 20},
        {'a', 30},
        {'p', 0},
        {'r', 0},
        {'p', 0},
        {'s', 0}
    };

    // Process each command
    for (auto command : commands) {
        char operation = command.first;
        int value = command.second;

        if (operation == 'a') {  // Add element to the vector
            sol.add_to_vector(A, value);
        } else if (operation == 'd') {  // Delete element from the vector
            sol.deleteElement(A, value);
        } else if (operation == 'r') {  // Reverse the vector
            sol.reverse_vector(A);
        } else if (operation == 'p') {  // Print the vector
            sol.print_vector(A);
        } else if (operation == 's') {  // Print the size of the vector
            sol.size_of_vector(A);
        }
    }

    return 0;
}
