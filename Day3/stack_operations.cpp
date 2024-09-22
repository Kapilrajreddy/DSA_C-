#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mini = INT_MAX;  // Use INT_MAX for better practice

    // Push operation with tracking minimum value
    void push(stack<int>& s, int a) {
        if (s.empty()) {
            s.push(a);
            mini = a;
        } else {
            if (a < mini) {
                s.push(2 * a - mini);
                mini = a;
            } else {
                s.push(a);
            }
        }
    }

    // Pop operation with maintaining minimum value
    int pop(stack<int>& s) {
        if (s.empty()) return -1;  // Handle empty stack case
        int topVal = s.top();
        s.pop();
        if (topVal < mini) {
            int originalVal = mini;
            mini = 2 * mini - topVal;
            return originalVal;
        }
        return topVal;
    }

    // Check if the stack is empty
    bool isEmpty(stack<int>& s) {
        return s.empty();
    }

    // Get minimum value
    int getMin(stack<int>& s) {
        if (s.empty()) return -1;  // Handle empty stack case
        return mini;
    }
};

int main() {
    Solution sol;
    stack<int> s;
    
    sol.push(s, 18);
    sol.push(s, 19);
    sol.push(s, 29);
    sol.push(s, 1);
    
    cout << "Minimum: " << sol.getMin(s) << endl; // Should print 1

    sol.pop(s);  // Removes 1
    cout << "Minimum after pop: " << sol.getMin(s) << endl;  // Should print 18

    return 0;
}
