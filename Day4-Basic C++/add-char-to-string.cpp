#include <bits/stdc++.h>
using namespace std;

void addChar(char c, string &s) {
    string result = c + s + c;
    cout << result << endl;
}

int main() {
    char c; string s;
    cin >> c;
    cin.ignore();
    getline(cin, s);
    addChar(c, s);
    return 0;
}

// Complexity Analysis
// Time Complexity: O(n)  

// Concatenation creates a new string, which requires copying all characters. Here, n is the length of s.
// Space Complexity: O(n) 

// Stores the new string of length n + 2


#include <bits/stdc++.h>
using namespace std;

void addChar(char c, string &s) {
    s.insert(s.begin(), c);  // Insert at the beginning
    s.push_back(c);          // Append at the end
    cout << s << endl;
}

int main() {
    char c;
    string s;
    cin >> c;
    cin.ignore();
    getline(cin, s);
    addChar(c, s);
    return 0;
}

// Complexity Analysis
// Time Complexity: O(n)  

// Insertion at the beginning takes O(n), since all characters shift right.

// Appending at the end takes O(1).

// Space Complexity: O(1) / O(n)  

// C++ (Pass by Reference): O(1) (modifies the string in-place).

// Python (String to List Conversion): O(n) (since strings are immutable, a list is used).

// Java (StringBuilder Usage): O(n) (since strings are immutable, StringBuilder is required).

// Overall Space Complexity: O(1) for C++, O(n) for Python & Java.


#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string addChar(char c, string s) {
        return c + s + c;
    }
};

int main() {
    char c;
    string s;

    cin >> c;
    cin.ignore();
    getline(cin, s);

    solution sol;
    string result = sol.addChar(c, s);

    cout << result << endl;

    return 0;
}